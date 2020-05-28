## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3330/
## Author : Shubhanshu Singh
## Date   : 16-05-2020

################################# Using Kadane's Algorithm ####################################

## Time Complexity: O(n)
## Space Complexity: O(1)


class Solution:
    def maxSubarraySumCircular(self, A: List[int]) -> int:
        
        max_sum = A[0]
        min_sum = A[0]
        
        curr_max_sum = 0
        curr_min_sum = 0
        
        total_sum = 0
        
        for item in A:
            curr_max_sum = max(item,curr_max_sum + item)
            max_sum = max(max_sum,curr_max_sum)
            
            curr_min_sum = min(item,curr_min_sum + item)
            min_sum = min(min_sum,curr_min_sum)
            
            total_sum = total_sum + item
        
        return max(max_sum,total_sum - min_sum) if max_sum > 0 else max_sum
        
