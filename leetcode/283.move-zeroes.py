from typing import List
#
# @lc app=leetcode id=283 lang=python3
#
# [283] Move Zeroes
#

# @lc code=start
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums) - 1
        i = 0
        j = 1

        while n:
            if i != 0:
                i += 1
            if j == 0:
                j += 1

            if (nums[i] == 0 and nums[j] != 0):
                nums[i], nums[j] = nums[j], nums[i]
                
            n -= 1
     

# @lc code=end

