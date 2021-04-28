#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;
typedef long long ll;
const int INF = 100000;

void PrintCircle(vector<vector<int>>& arr,int rows,int cols,int start)
{
    int endi = rows - 1 - start;
    int endj = cols - 1 - start;

    int j;
    for(j = start;j <= endj;j++)
    {
        cout << arr[start][j] <<" ";
    }

    if(endi > start)
    {
        for(int i = start + 1;i <= endi;i++)
        {
            cout << arr[i][endj] <<" ";
        }
    }

    if(endi > start&endj > start)
    {
        for(int j = endj - 1;j >= start;j--)
        {
            cout << arr[endi][j] <<" ";
        }
    }

    if(endi > start + 1&endj > start)
    {
        for(int i = endi - 1;i >= start + 1;i--)
        {
            cout << arr[i][start] <<" ";
        }
    }
}

int main() {
    int row,col;
    cin >> row >>col;
    vector<vector<int>> arr;
    for (int i = 0; i <row ; ++i) {
        vector<int> temp;
        for (int j = 0; j < col; ++j) {
            int t;
            cin>>t;
            temp.push_back(t);
        }
        arr.push_back(temp);
    }
    int start=0;
    while(row > start * 2&&col > start * 2)
    {
        PrintCircle(arr,row,col,start);
        start++;
    }

    return 0;
}