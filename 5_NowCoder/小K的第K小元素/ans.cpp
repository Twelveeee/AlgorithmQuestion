#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >>n; //��������
    vector<vector<int>> nums;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        vector<int> numList;
        while (temp--){
            int temp2;
            cin>>temp2;
            numList.push_back(temp2);
        }
        nums.push_back(numList);
    }

    int q; //��������
    cin >>q;
    for (int i = 0; i < q; ++i) {
        int p,k;
        cin >> p;
        vector<int> needMeg; //��Ҫ�ϲ��������±�
        for(int j =0;j<p;j++){
            int temp;
            cin >> temp;
            needMeg.push_back(temp-1);
        }
        cin >>k;//��KС����
        vector<int> newarr =  nums[needMeg[0]];//����һ���µ�����
        sort(newarr.begin(),newarr.end());
        for (int j = 1; j < p; ++j) {
            for(int num:nums[needMeg[j]]){
                int size=newarr.size();
                for (int l = 0; l <size; ++l) {
                    if(num<newarr[l]){
//                        newarr.insert(l,num);
                        newarr.insert(newarr.begin()+l,num);
                        size++;
                        break;
                    }else if(l == newarr.size()-1){
                        newarr.push_back(num);
                    }
                }
            }
        }
        cout << newarr[k-1]<<endl;

    }
}