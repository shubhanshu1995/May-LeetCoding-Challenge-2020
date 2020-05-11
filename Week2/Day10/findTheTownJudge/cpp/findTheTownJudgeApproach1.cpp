// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
// Author : Shubhanshu Singh
// Date   : 11-05-2020

/***************** Approach 1 using unordered maps *******************************/


//Time Complexity: O(T+N) where T = trust size
//This is equivalent to |Vertices| + |Edges| in graph terms,
// if we consider each person as a vertex and each trust relationship as a directed edge.


//Space Complexity: O(N)

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        if(trust.size()==0)
            return 1;
        
        unordered_map<int,int> first_element;
        unordered_map<int,int> second_element;
        
        for(int i=0;i<trust.size();++i)
        {
            vector<int> a = trust[i];
            first_element[a[0]] += 1;
            second_element[a[1]] += 1;
        }
        
        int ans = -1;
        for(int i=1;i<=N;++i)
        {
            if(second_element.find(i) != second_element.end())
            {
                if(first_element.find(i) == first_element.end())
                    if(second_element[i]==N-1)
                        ans = i;
            }
        }
        return ans;
    }
};