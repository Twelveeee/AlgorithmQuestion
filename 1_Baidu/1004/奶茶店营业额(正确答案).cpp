#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

const int cnt = 24 * 60; //以分钟为单位，一天共有24*60min，为下一行定义前缀和计算空间
double money[cnt + 10]; //记录从00:00开始到每一分钟的总优惠金额(前缀和的思想),这样可以快速计算出a时刻到b时刻的优惠金额即为money[b]-money[a]
int case_hour[24];

struct Person
{
	int arrive_time;
	int serve_time;
	int price;
	int discounts; //优惠金额

	bool operator< (const Person& t) const //这样写的语法是方便之后对顾客到达时间直接用sort进行排序
	{
		return arrive_time < t.arrive_time;
	}
};

int main()
{
	for (int i = 0; i < 24; i++) cin >> case_hour[i];  //处理输入
	money[0] = 0;
	for (int i = 1; i <= cnt; i++) money[i] = money[i - 1] + case_hour[(i - 1) / 60]; //前缀和思想简化代码，得到00:00开始到每一分钟的总优惠金额，cnt为一天总分钟数
	int K, N;
	vector<Person> persons;
	cin >> K >> N;
	for (int i = 0; i < N; i++) //处理输入
	{
		int hour, minite, serve_time;
		double price;
		scanf("%d:%d %d %lf", &hour, &minite, &serve_time, &price);
		int arrive_time = hour * 60 + minite;  //将时间全部转化为以分钟为单位的整数
		price = price * 100; //价格转化为整数方便计算
		persons.push_back({ arrive_time,serve_time,(int)price });
	}
	priority_queue<int, vector<int>, greater<int>> windows;  //窗口空闲时间最小堆
	for (int i = 0; i < K; i++) windows.push(0);  //一开始所有窗口都初始化为0，代表空闲时间为0开始，单位都是从0：00到某时刻的分钟数
	sort(persons.begin(), persons.end());  //顾客到达时间进行排序
	double turnover = 0;
	for (auto& person : persons)
	{
		while (person.arrive_time > windows.top())  //当前顾客到达时间晚于最先空闲窗口的空闲时间，使用while是为了之后discounts计算正确，不必担心会影响之后顾客，因为顾客到达时间已经排序了
		{
			windows.pop();
			windows.push(person.arrive_time); 
		}
		person.discounts = money[windows.top()] - money[person.arrive_time];  //计算优惠金额
		int x = windows.top();
		windows.pop();
		windows.push(x + person.serve_time);  //修改窗口最小堆
		turnover = turnover + person.price - person.discounts;
	}
	printf("%.2lf", turnover / 100.0);
	return 0;
}
