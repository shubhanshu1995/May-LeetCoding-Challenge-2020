// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
// Author : Shubhanshu Singh
// Date   : 10-05-2020


/*****************  Naive Approach *******************************/

//Note: Do not use any built-in library function such as sqrt.

// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)


class Solution {
public:
    bool isPerfectSquare(int num) {
        
        for(long long i=0;i*i<=num;++i)
        {
            if(i*i == num)
                return true;
        }
        return false;
    }
};

