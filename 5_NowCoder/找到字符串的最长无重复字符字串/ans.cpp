class Solution {
public:
    /**
     * 
     * @param arr int����vector the array
     * @return int����
     */
    int maxLength(vector<int>& arr) {
            map<int,int> m;
    int len = arr.size(),pre=0,ans=0;
    for (int i = 0; i < len; ++i) {
        m[arr[i]] = -1;
    }
    for (int i = 0; i < len; ++i) {
        if (m[arr[i]] !=-1) {
            pre = max(m[arr[i]]+1,pre);
        }
        ans = max(ans,i-pre+1);
        m[arr[i]]=i;
    }
    return ans;
        return ans;
    }
};