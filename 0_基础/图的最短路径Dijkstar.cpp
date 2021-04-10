#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

const int INF = 1000000000;
using namespace std;
typedef long long ll;

int main() {
    int n,m;
    cin >>n >> m; //n是点数，m是边数；
    vector<vector<int>> path;
    for (int i = 0; i < m; ++i) {
        int start,end,width;
        cin >>start>>end>>width;
        vector<int> temp = {start,end,width};
        path.push_back(temp);
    }

    int parent[n+1];
    int distance[n+1];
    int see[n+1];
    for (int i = 0; i <=n ; ++i) {
        parent[i]=-1;
        distance[i] = INF;
        see[i]=false;
    }
    distance[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<> > que;
    pair<int,int> tempPair(0,1);//第一个距离，第二个点；
    que.push(tempPair);

    while (!que.empty()){
        int dis = que.top().first;
        int start = que.top().second;
        que.pop();
        if(see[start]) continue;
        see[start] = true;

        for (int i = 0; i < m; ++i) {
            int startTemp = path[i][0];
            int endTemp = path[i][1];
            int disTemp =  path[i][2];

            if(!see[endTemp] && startTemp == start &&  dis+disTemp < distance[endTemp]  ){
                pair<int,int> temp(dis+disTemp,endTemp);
                que.push(temp);
                parent[endTemp] = start;
                distance[endTemp] = dis+disTemp;
                cout <<distance[endTemp] <<endl;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout<<i<<":"<<distance[i]<<endl;
    }
}



