#include <iostream>
#include<iomanip>
using namespace std;
const int MAXN = 6000;
int main() {
    string str1,str2;
    cin>>str1>>str2;
    if (str1.length()+str2.length() ==0){
        cout<< "0.00" <<endl;
        return 0;
    }
    if(str1.length()>str2.length())swap(str1,str2);

    int n1 = str1.length();
    int n2 = str2.length();
    string cnt1[MAXN];
    int count1 = 0;
    double c=0;


    for(int i = 0;i<n1;i++){
        for(int j =i+1;j<n1+1;j++){
            cnt1[count1++] = str1.substr(i,j-i);
        }
    }
    for(int i = 0;i<n2;i++){
        for(int j =i+1+c;j<n2+1;j++){
            for(int k = 0;k<count1;k++){
                if(str2.substr(i,j-i)==cnt1[k]){
                    if (c<=cnt1[k].size()){
//                        cout<<cnt1[k].size()<<" "<<i<<':'<<j-i<<" "<<cnt1[k]<<endl;
                        c=cnt1[k].size();
                    }
                }
            }

        }
    }
    cout.setf(ios::fixed);
//    cout<<setprecision(2)<<c<<endl;
    cout<<setprecision(2)<<c/(n1+n2)<<endl;

    return 0;
}