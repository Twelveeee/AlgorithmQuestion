class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> ans;
        int n = input.size();
        if(n<k)return ans;
        sort(input.begin(),input.end());
        for(int i =0;i<k;i++){
            ans.push_back(input[i]);
        }
        return ans;
    }
};