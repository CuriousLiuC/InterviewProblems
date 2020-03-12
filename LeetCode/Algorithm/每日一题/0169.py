class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        lennums = len(nums)
        dic = {}
        for i in range(lennums):
            if dic.get(nums[i]) is None:
                dic[nums[i]] = 1
            else:
        	    dic[nums[i]] += 1

        for a,b in dic.items():
            if b > lennums//2:
                return a

        return None