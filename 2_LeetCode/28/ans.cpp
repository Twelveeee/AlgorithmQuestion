class Solution {
public:
    int strStr(string haystack, string needle) {
    int n= haystack.size();
    int m = needle.size();
    if(n<m && m!=n)return -1;
    if( m==0 )return 0;
    for(int i =0;i<n;i++){
        if(haystack[i] == needle[0]){
            for(int j=0;j<m;j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
                if(j == m-1){
                    return i;
                }
            }
        }
    }
    return -1;
}
};