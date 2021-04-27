class Solution {
public:
int numDecodings(string s) {
    int n = s.size();
    vector<int> dp(n+1,0);
    if(s[0]=='0')return 0;
    dp[0] =1;
    for(int i=1;i<=n;i++){
        int a = s[i-1] -'0';
         int b = 0;
        if(i>=2){
           b = (s[i-2] -'0')*10 + s[i-1]-'0';
        }
        if(a!=0){
            dp[i] += dp[i-1];
        }
        if(b>=10&&b<=26 && i>1){
            dp[i]+= dp[i-2];
        }
    }
    return dp[n];
}
};