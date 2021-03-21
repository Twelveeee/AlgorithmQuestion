#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

const int cnt = 24 * 60; //�Է���Ϊ��λ��һ�칲��24*60min��Ϊ��һ�ж���ǰ׺�ͼ���ռ�
double money[cnt + 10]; //��¼��00:00��ʼ��ÿһ���ӵ����Żݽ��(ǰ׺�͵�˼��),�������Կ��ټ����aʱ�̵�bʱ�̵��Żݽ�Ϊmoney[b]-money[a]
int case_hour[24];

struct Person
{
	int arrive_time;
	int serve_time;
	int price;
	int discounts; //�Żݽ��

	bool operator< (const Person& t) const //����д���﷨�Ƿ���֮��Թ˿͵���ʱ��ֱ����sort��������
	{
		return arrive_time < t.arrive_time;
	}
};

int main()
{
	for (int i = 0; i < 24; i++) cin >> case_hour[i];  //��������
	money[0] = 0;
	for (int i = 1; i <= cnt; i++) money[i] = money[i - 1] + case_hour[(i - 1) / 60]; //ǰ׺��˼��򻯴��룬�õ�00:00��ʼ��ÿһ���ӵ����Żݽ�cntΪһ���ܷ�����
	int K, N;
	vector<Person> persons;
	cin >> K >> N;
	for (int i = 0; i < N; i++) //��������
	{
		int hour, minite, serve_time;
		double price;
		scanf("%d:%d %d %lf", &hour, &minite, &serve_time, &price);
		int arrive_time = hour * 60 + minite;  //��ʱ��ȫ��ת��Ϊ�Է���Ϊ��λ������
		price = price * 100; //�۸�ת��Ϊ�����������
		persons.push_back({ arrive_time,serve_time,(int)price });
	}
	priority_queue<int, vector<int>, greater<int>> windows;  //���ڿ���ʱ����С��
	for (int i = 0; i < K; i++) windows.push(0);  //һ��ʼ���д��ڶ���ʼ��Ϊ0���������ʱ��Ϊ0��ʼ����λ���Ǵ�0��00��ĳʱ�̵ķ�����
	sort(persons.begin(), persons.end());  //�˿͵���ʱ���������
	double turnover = 0;
	for (auto& person : persons)
	{
		while (person.arrive_time > windows.top())  //��ǰ�˿͵���ʱ���������ȿ��д��ڵĿ���ʱ�䣬ʹ��while��Ϊ��֮��discounts������ȷ�����ص��Ļ�Ӱ��֮��˿ͣ���Ϊ�˿͵���ʱ���Ѿ�������
		{
			windows.pop();
			windows.push(person.arrive_time); 
		}
		person.discounts = money[windows.top()] - money[person.arrive_time];  //�����Żݽ��
		int x = windows.top();
		windows.pop();
		windows.push(x + person.serve_time);  //�޸Ĵ�����С��
		turnover = turnover + person.price - person.discounts;
	}
	printf("%.2lf", turnover / 100.0);
	return 0;
}
