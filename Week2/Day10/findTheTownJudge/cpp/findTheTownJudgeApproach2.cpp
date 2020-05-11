// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
// Author : Shubhanshu Singh
// Date   : 11-05-2020

/***************** Approach 2 using single vector for count *******************************/


//Time Complexity: O(T+N) where T = trust size
//This is equivalent to |Vertices| + |Edges| in graph terms,
// if we consider each person as a vertex and each trust relationship as a directed edge.


//Space Complexity: O(N)

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int> countTrust(N + 1, 0);
        for (auto& t : trust)
            countTrust[t[0]]--, countTrust[t[1]]++;
        for (int i = 1; i <= N; ++i) {
            if (countTrust[i] == N - 1) return i;
        }
        return -1;
    }
};
