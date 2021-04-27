class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size()==0)return false;
        int m=matrix[0].size(),n=matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==target) return true;
                else if(matrix[i][j]>target) break;
            }
        }
        return false;
    }
};