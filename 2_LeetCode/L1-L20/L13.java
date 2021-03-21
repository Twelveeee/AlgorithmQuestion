//罗马数字转整数
class Solution {
    public int romanToInt(String s) {
        int num =0;
		int i=0;
		int next=0;
		while(i<s.length()) { 
			if(i==s.length()-1) {
				next =0;
			}else {
				next=getValue(s.charAt(i+1));
			}
			int n	=getValue(s.charAt(i));
			if(next>n) {
				num=num+next-n;
				i+=2;
			}else {
				num+=n;
				i++;
			}
		}
        return num;
    }
    private int getValue(char ch) {
	        switch(ch) {
	            case 'I': return 1;
	            case 'V': return 5;
	            case 'X': return 10;
	            case 'L': return 50;
	            case 'C': return 100;
	            case 'D': return 500;
	            case 'M': return 1000;
	            default: return 0;
	        }

	 }
}