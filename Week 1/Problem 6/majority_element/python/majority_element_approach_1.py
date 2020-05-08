# Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/
# Author : Shubhanshu Singh
# Date   : 07-05-2020


############################################## Using Counter (Hashmap) #######################################
# Time Complexity: O(n)
# Space Complexity: O(n)

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        nums_hash = Counter(nums)
        nums_unique_list = list(set(nums))
        
        for item in nums_unique_list:
            if nums_hash[item] > int(len(nums)/2):
                return item
        