#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>
//setprecision(2)
using namespace std;

void R2C(string &str){
    int n  = str.size();
    for (int i = 0; i < n; ++i) {
        if (str[i]=='C'){
            int r=0;int c=0;
            r =atoi(str.substr(1,i-1).c_str());
            c =atoi(str.substr(i+1,n-i+1).c_str());
//            cout <<r <<" " <<c;
            vector<char> outp;
            while (c%26!=0){
                char temp = c%26 + 'A'-1;
                outp.push_back(temp);
                c=c/26;
            }
            for (int j = outp.size()-1; j >=0 ; --j) {
                cout<< outp[j];
            }
            cout<< r<<endl;
            return;
        }
    }
};
void C2R(string &str){
    int num=0;
    int i=0,count=0;
    while (!isdigit(str[i]))i++;
    string sub = str.substr(0,i);
    for (int j = sub.size()-1; j >=0; j--) {
//        cout << (sub[j]-'A'+1)<<endl;
        num = num + (sub[j]-'A'+1)*pow(26.0,count);
        count ++;
    }
    int c= atoi(str.substr(i,str.size()-i).c_str());
    cout<<"R"<<num<<"C"<<c<<endl;
    return;
}
int main() {
    int T;
    cin>> T;
    for (int i = 0; i < T; ++i) {
        string s;
        cin >> s;
        //≈–∂œ «≤ª «
        if (s[0]=='R' && isdigit(s[1])){
            R2C(s);
        }else{
            C2R(s);
        }
    }

    return 0;
}
