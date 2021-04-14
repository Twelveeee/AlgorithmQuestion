#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() -1;
    while(low <= high){
        int mid = low+(high-low)/2;
        int tar = nums[mid];
        if(target > tar){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return low;
}

int main() {
    vector<int> arr ={1,3};
    int target = 2;
    cout << searchInsert(arr,target);
}