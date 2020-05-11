## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
## Author : Shubhanshu Singh
// Date   : 11-05-2020

########################## Approach 1 using single list for count ########################################


## Time Complexity: O(T+N) where T = trust size
## This is equivalent to |Vertices| + |Edges| in graph terms,
## if we consider each person as a vertex and each trust relationship as a directed edge.


## Space Complexity: O(N)

class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        countTrust = [0] * (N + 1)
        for i, j in trust:
            countTrust[i] -= 1
            countTrust[j] += 1
        for i in range(1, N + 1):
            if countTrust[i] == N - 1:
                return i
        return -1