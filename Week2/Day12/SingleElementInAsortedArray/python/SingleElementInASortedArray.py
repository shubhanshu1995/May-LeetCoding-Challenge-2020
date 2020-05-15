## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/
## Author : Shubhanshu Singh
## Date   : 13-05-2020


########################### Using Binary Search #######################################



## For odd position compare with the previous number.
## For even position compare with the next number. 
## The unique number must be at even position.


## Time Complexity: O(logn)
## Space Complexiy: O(1)







class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        
        l = 0 
        r = len(nums)-1
        
        while(l < r):
            mid = int(l + (r-l)/2);
            
            if((mid % 2 == 0 and nums[mid] == nums[mid + 1]) or (mid % 2 != 0 and nums[mid] == nums[mid - 1])):
                l = mid + 1;
            else:
                r = mid;
        
        return nums[l];