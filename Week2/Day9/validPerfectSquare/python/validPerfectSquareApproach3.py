## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
## Author : Shubhanshu Singh
## Date   : 10-05-2020


############################### Approach 3 using Newton's Method #######################################

## Note: Do not use any built-in library function such as sqrt.

## Time Complexity: O(1)
## Time Complexity is close to constant, given a positive integer.

## Space Complexity: O(1)


class Solution:
    def isPerfectSquare(self, num: int) -> bool:
       
        x = num
        while (x * x > num):
            x = int( (x + num / x)/2)
        return x * x == num
        