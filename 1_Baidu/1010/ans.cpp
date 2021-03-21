#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    string str ;
    cin >> str;
    int n=str.size();
    vector<char> ans;
    for (int i = 0; i < n; ++i) {
        if(isalpha(str[i])&&i<n&&isalpha(str[i+1])){
            ans.push_back(str[i]);
//            cout<< str[i];
        }else if(isalpha(str[i]) && i<n &&isdigit(str[i+1])){
            int num =0;
            char nowchar = str[i];
            while (i<n && isdigit(str[i+1])){
                num = num*10 + (str[i+1]-'0');
                i++;
            }
            for (int j = 0; j < num; ++j) {
                ans.push_back(nowchar);
//                cout << nowchar;
            }
        } else{
            ans.push_back(str[i]);
//            cout << str[i];
        }


    }
    for (int i = 0; i < ans.size(); ++i) {
        if (i>=100) break;
        cout<< ans[i];
    }
        cout  <<endl;

//        cout << "aaaaabbbabaaaaaaaaaaaaabbbb";

    return 0;
}