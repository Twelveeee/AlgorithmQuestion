#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int kps(vector<int> &arr,int low,int high){
    int anchor = arr[low];
    while (low<high){
        while (low<high && arr[high]>=anchor) high--;
        arr[low] = arr[high];
        while (low<high && arr[low]<=anchor) low++;
        arr[high] = arr[low];
    }
    arr[low] = anchor;
    return low;
}

void kp(vector<int> &arr,int low,int high){
    if (low<high){
        int anchor = kps(arr,low,high);
        kp(arr,low,anchor-1);
        kp(arr,anchor+1,high);
    }
}

int main() {
    vector<int> arr{1,8,6,3,9,2};

    kp(arr,0,arr.size()-1);
    for (int i : arr) {
        cout << i<<endl;
    }
}