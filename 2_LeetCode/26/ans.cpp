class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)return nums.size();
        int curr= 0 ;
        int n =nums.size();
        for(int i=1;i<n;i++){
            if(nums[curr] != nums[i]){
                curr++;
                nums[curr] = nums[i];
            }
        }
        return ++curr;
    }
};