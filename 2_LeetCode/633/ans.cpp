class Solution {
public:
    bool judgeSquareSum(int c) {
        int max  = sqrt(c);
        for(int i=0;i<=max;i++){
            int b = sqrt(c-(i*i));
            if(b*b + i*i == c)return true;
        }
        return false;
    }
};