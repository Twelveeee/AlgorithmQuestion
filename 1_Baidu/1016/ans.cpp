#include <iostream>
using namespace std;
typedef long long ll; //��long long �����LL �ÿ�һ��

int main() {
    int price[]={1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    float value[10];
    for (int i = 0; i < 10; ++i) { //��ʼ���Լ۱�����
        value[i]=float(price[i])/float(i+1);
    }


    int n;
    ll ans =0; //�´𰸳���int�����ƣ�������long long���������ɵ�λ����int��
    cin >>n; //�������˼�� n =reader.nextInt();
    while(n>0){ //��n>0ʱ����ѭ��
		//��Ӳ�Ҵ���10��ʱ��һ��ѡ10����Ϊ10���Լ۱����
        if (n>=10){
            ans +=30;
            n-=10;
            continue;
        }
		//�������д���˷��֣���4��Ӳ�ҵ�ʱ�����Ҳ��9�����ִ���һ��������
        int maxindex=0;
        if (n==4){
            ans +=10;
            break;
        }
		
		//�ҵ��Լ۱���ߵ���Ʒ
        for (int i = 0; i < n; ++i) {
            if (value[maxindex]<value[i])maxindex=i;
        }
        ans +=price[maxindex];
        n = n-maxindex-1;
    }
    cout << ans;
}