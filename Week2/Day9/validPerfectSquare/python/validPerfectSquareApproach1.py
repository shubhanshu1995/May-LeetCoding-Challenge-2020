## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
## Author : Shubhanshu Singh
## Date   : 10-05-2020


############################### Approach 1 using simple high school mathematics #######################################

## Note: Do not use any built-in library function such as sqrt.

## a square number follows the pattern 1+3+5+7+.....+(2*n - 1) 

## Time Complexity: O(sqrt(n))
## Space Complexity: O(1)

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        x = 1
        
        while(num>0):
            num = num - x
            x = x + 2
        
        return num == 0
        