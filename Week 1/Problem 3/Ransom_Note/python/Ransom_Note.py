# Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
# Author : Shubhanshu Singh
# Date   : 04-05-2020

# ####################################################################################################################
# Given an arbitrary ransom note string and another string containing letters from all the magazines,
# write a function that will return true if the ransom note can be constructed from the magazines ;
# otherwise, it will return false.

# Each letter in the magazine string can only be used once in your ransom note.

# Note:
# You may assume that both strings contain only lowercase letters.

# canConstruct("a", "b") -> false
# canConstruct("aa", "ab") -> false
# canConstruct("aa", "aab") -> true
# ###################################################################################################################

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        
        x1 = Counter(ransomNote)
        x2 = Counter(magazine)
        cnt = 0
        # unique_magazine = "".join(set(magazine))
        
        for item in x2:
            if item in x1:
                if x2[item] >= x1[item]:
                    cnt = cnt + x1[item]
        
        if cnt == len(ransomNote):
            return True
        return False
            
        
        
        