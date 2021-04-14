#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
vector<int> parent;
int find(int x){
    return parent[x] == x?x:find(parent[x]);
}
void unionParent(int a,int b){
    int p1 = find(a);
    int p2 = find(b);
    if (p1>p2){
        int temp =p1;
        p1 = p2;p2=temp;
    }
    parent[p1]=p2;
}
int main() {
    int n,m;
    int ans=0;
    cin >> n>>m;
    for (int i = 0; i < n; ++i) {
        parent.push_back(i);
    }
    for (int i = 0; i < m; ++i) {
        int a,b;
        cin >>a>>b;
        unionParent(a,b);
    }
    for (int i = i; i <=n ; ++i) {
        if (parent[i]==i) ans++;
    }
    if (ans==0){
        ans =1;
    }
    cout<<ans-1;
    return 0;
}
