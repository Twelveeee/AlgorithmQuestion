class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        j=len(nums)
        for i in range(j-1,-1,-1):
            if nums[i]==val:
                nums.pop(i)    
        return len(nums)