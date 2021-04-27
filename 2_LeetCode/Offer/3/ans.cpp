class Solution {
    
public:
    const int INT = 100001;
    int findRepeatNumber(vector<int>& nums) {
        int arr[INT] ;
        memset(arr,0,INT);
        for(int num:nums){
            if(arr[num] ==1){
                return num;
            }else arr[num]=1;
        }
        return 0;
    }
};