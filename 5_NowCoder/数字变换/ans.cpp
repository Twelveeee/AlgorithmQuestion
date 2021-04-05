#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <algorithm>

using namespace std;

const int INTMAX= INT_MAX;
int main() {
    int T;
    cin >>T ;
    while (T--){
        int n;
        cin >>n;
        int dp[n];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for (int i = 3; i < n; ++i) {
            int minStep1=dp[i-1]+1;
            int minStep2=INTMAX;
            int minStep3=INTMAX;
            if((i+1)%2==0)minStep2=dp[i/2]+1;
            if((i+1)%3==0)minStep3=dp[i/3]+1;
            minStep2 = min(minStep2,minStep3);
            dp[i]=min(minStep1,minStep2);
            cout<<i<<":"<<dp[i]<<endl;
        }
        cout<<dp[n-1];
    }
}