// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
// Author : Shubhanshu Singh
// Date   : 10-05-2020

/*****************  Approach 4 using Newton's Method *******************************/

//Time Complexity: O(1)
//Time Complexity is close to constant, given a positive integer.

//Space Complexity: O(1)

class Solution {
public:
    
    bool isPerfectSquare(int num) {
        
        long x = num;
        while (x * x > num) {
            x = (x + num / x)/2;
        }
        return x * x == num;
    }
};