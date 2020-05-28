// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3330/
// Author : Shubhanshu Singh
// Date   : 16-05-2020

/*************************************** Using Kadane's Algorithm **************************************/

//Time Complexity: O(n)
//Space Complexity: O(1)


class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        int max_sum = A[0];
        int min_sum = A[0];
        
        int curr_max_sum = A[0];
        int curr_min_sum = A[0];
        
        int total_sum = A[0];
        
        for(int i=1;i<A.size();++i)
        {
            curr_max_sum = max(A[i],curr_max_sum + A[i]);
            max_sum = max(max_sum,curr_max_sum);
            
            curr_min_sum = min(A[i],curr_min_sum + A[i]);
            min_sum = min(min_sum,curr_min_sum);
            
            total_sum += A[i]; 
        }
        
        return max_sum > 0 ? max(max_sum,total_sum - min_sum):max_sum;
    }
};


