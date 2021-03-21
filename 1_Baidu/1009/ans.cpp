#include <iostream>
using namespace  std;



int main() {
    string str;
    cin >> str;
    int curr;
    int anchor = 0;

    for (curr = 0;curr<str.size();curr++){
        if(curr+1==str.size()|| str[curr+1]!=str[curr]){
            cout <<  str[anchor];
            if(curr > anchor){
                if(curr -anchor+1 ==2) cout <<  str[curr];
                if(curr -anchor+1 >2){
                    for(char c :(""+to_string(curr-anchor+1))){
                        cout << c;
                    }
                }
            }
            anchor = curr+1;
        }
    }



    cout << endl;
    return 0;
}