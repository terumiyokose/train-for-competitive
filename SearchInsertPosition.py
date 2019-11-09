class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        ans =0
        for i in nums:
            if(i==target):
                ans= nums.index(i)
                break
            elif(i>target):
                ans=nums.index(i)
                break
            elif(target>i):
                ans=nums.index(i)+1
        return ans
        
