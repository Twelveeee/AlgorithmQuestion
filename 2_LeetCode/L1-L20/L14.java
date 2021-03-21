//最长公共前缀
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0) return "";
		int min=1000;
		StringBuffer ans =new StringBuffer();
		
		for(int i=0;i<strs.length;i++) {
			min=Math.min(min, strs[i].length());
		}
		for(int i=0;i<min;i++) {
			char ch = strs[0].charAt(i);
			for(int j=1;j<strs.length;j++) {
				if(strs[j].charAt(i)!=ch) return ans.toString();
			}
			ans.append(ch);
		}
		return ans.toString();
    }
}