#include <iostream>
#include <vector>
using namespace std;
int ans =0,r,c;
vector<vector<bool>> map;

void check(int i,int j){
    //вС
    if (j==0||map[i][j-1]==0)ans++;
    //ср
    if (j==c-1||map[i][j+1]==0)ans++;
    //ио
    if (i==0||map[i-1][j]==0)ans++;
    //об
    if (i==r-1||map[i+1][j]==0)ans++;
};

int main() {
    cin >> r>>c;
    bool inbool;
    for (int i = 0; i < r; ++i) {
        vector<bool> in;
        for (int j = 0; j < c; ++j) {
            cin >> inbool;
            in.push_back(inbool);
        }
        map.push_back(in);
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (map[i][j]==1)check(i,j);
        }
    }

    cout << ans;
    return 0;
}