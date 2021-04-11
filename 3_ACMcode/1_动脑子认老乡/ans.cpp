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

int parent[1000];
int ans ;
void join(int a,int b){
    if (a<b){
        parent[b]=a;
    }else if (a>b){
        parent[a]=b;
    }
}

void find(int num){
    int j = num;
    while (parent[j]!=-1){
        j = parent[j];
    }
    if (j == 1){
        ans++;
    }
}

int main()
{
    int  n,m;
    while (cin >> n>>m){
        memset(parent,-1,sizeof parent);
        ans = 0;
        for (int i = 0; i < m; ++i) {
            int a,b,c;
            cin>> a>>b>>c;
            if (c==1){
                join(a,b);
            }
        }
        for (int j = 2; j <= n; ++j) {
            find(j);
        }
        cout << ans << endl;

    }


    return 0;
}