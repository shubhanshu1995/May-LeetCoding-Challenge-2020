// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
// Author : Shubhanshu Singh
// Date   : 10-05-2020

/*****************  Approach 3 using Binary Search *******************************/

//Note: Do not use any built-in library function such as sqrt.

// Time Complexity: O(log(n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long l = 1,r = num,mid;
        
        while(l<=r)
        {
            mid = l + (r - l)/2;
            
            if(mid * mid == num)
                return true;
            else if(mid*mid > num)
                r = mid-1;
            else if(mid*mid < num)
                l = mid+1;
        }
        return false;
        
    }
};