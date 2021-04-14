#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin>> n;
    ll dp[n+1];
    dp[0]=0;dp[1]=1;dp[2]=2;dp[3]=3;
    for (int i = 4; i <=n ; ++i)dp[i] = max(2*dp[i-2],3*dp[i-3]);
    cout <<  dp[n];
}