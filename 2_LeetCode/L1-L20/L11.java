//�����ⷨ
class Solution {
    public int maxArea(int[] height) {
        int max=0;
		for(int i=0;i<height.length;i++) {
			for(int j=i+1;j<height.length;j++) {
				if(Math.min(height[i],height[j])*(j-i)>max) {
					max=(int) Math.min(height[i],height[j])*(j-i);
				}
			}
		}
        return max;
    }
}

//˫ָ��
public class Solution {
    public int maxArea(int[] height) {
        int maxarea = 0, l = 0, r = height.length - 1;
        while (l < r) {
            maxarea = Math.max(maxarea, Math.min(height[l], height[r]) * (r - l));	
            if (height[l] < height[r])	//��һ��С��ʱ���ƶ�С��ָ��
                l++;
            else
                r--;
        }
        return maxarea;
    }
}
