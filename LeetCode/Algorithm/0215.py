class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        #这样看来面试中回答的好像没有问题啊？
        nums.sort(reverse=True)
        return nums[k-1]