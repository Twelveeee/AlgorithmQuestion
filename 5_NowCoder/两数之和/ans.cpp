class Solution {
public:
    /**
     * 
     * @param numbers int����vector 
     * @param target int���� 
     * @return int����vector
     */
    vector<int> twoSum(vector<int>& numbers, int target) {
        // write code here
        vector<int> ans;
        int len = numbers.size();
        if(len<2)return ans;
        for(int i = 0;i<len;i++){
            for(int j =i+1;j<len;j++){
                if(numbers[i]+numbers[j] == target){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
            }
        }
        return ans;
    }
};