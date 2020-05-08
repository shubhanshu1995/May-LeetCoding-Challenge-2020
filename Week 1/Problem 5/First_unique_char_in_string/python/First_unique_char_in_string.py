# Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
# Author : Shubhanshu Singh
# Date   : 05-05-2020



# ####################################################################################################################
# Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

# Examples:

# s = "leetcode"
# return 0.

# s = "loveleetcode",
# return 2.
# Note: You may assume the string contain only lowercase letters.
# ####################################################################################################################


class Solution:
    def firstUniqChar(self, s: str) -> int:
        x = Counter(s)
        
        index = -1
        
        for key,item in enumerate(s):
            if x[item] == 1:
                index = key
                break
                
        return index
        