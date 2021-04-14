#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;
typedef long long ll;
int main() {
    string str;
    cin >> str;
    ll ans=0;

    ll len = str.size();
    for (int i = 0; i < len; ++i) {
        int l=i,r=i+1;
        char flag = str[l];
        while (r<len && l>=0 &&str[r]=='0' &&str[l]=='1'&& str[l]==flag ){
            ans++;l--;r++;
        }

        while (r<len && l>=0 &&str[r]=='1' &&str[l]=='0'&& str[l]==flag){
            ans++;l--;r++;
        }
    }
    cout <<ans;
}

