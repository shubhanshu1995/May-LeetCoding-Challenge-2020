## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
## Author : Shubhanshu Singh
## Date   : 10-05-2020


############################### Approach 2 using Binary Search #######################################

## Note: Do not use any built-in library function such as sqrt.

## Time Complexity: O(log(n))
## Space Complexity: O(1)


class Solution:
    def isPerfectSquare(self, num: int) -> bool:
       
        l = 1
        r = num
        
        while(l<=r):
            
            mid = int(l + (r - l)/2);
            
            if(mid * mid == num):
                return True;
            elif(mid*mid > num):
                r = mid-1;
            elif(mid*mid < num):
                l = mid+1;
        return False;
        
