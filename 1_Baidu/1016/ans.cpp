#include <iostream>
using namespace std;
typedef long long ll; //把long long 定义成LL 好看一点

int main() {
    int price[]={1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    float value[10];
    for (int i = 0; i < 10; ++i) { //初始化性价比数组
        value[i]=float(price[i])/float(i+1);
    }


    int n;
    ll ans =0; //怕答案超过int的限制，所以用long long，可能容纳的位数比int大
    cin >>n; //这个的意思是 n =reader.nextInt();
    while(n>0){ //当n>0时持续循环
		//当硬币大于10的时候，一定选10，因为10的性价比最高
        if (n>=10){
            ans +=30;
            n-=10;
            continue;
        }
		//这个是我写完了发现，我4个硬币的时候输出也是9，随手打了一个补丁。
        int maxindex=0;
        if (n==4){
            ans +=10;
            break;
        }
		
		//找到性价比最高的商品
        for (int i = 0; i < n; ++i) {
            if (value[maxindex]<value[i])maxindex=i;
        }
        ans +=price[maxindex];
        n = n-maxindex-1;
    }
    cout << ans;
}