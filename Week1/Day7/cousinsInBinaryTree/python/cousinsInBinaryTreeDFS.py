# Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/
# Author : Shubhanshu Singh
# Date   : 07-05-2020


######################################### Using depth first search ###########################################


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCousins(self, root: TreeNode, x: int, y: int) -> bool:
        
        lookup = {}
        
        def dfs(root,depth=0,parent=None):
            if root == None:
                return
            lookup[root.val] = (parent,depth)
            
            dfs(root.left,depth+1,root.val)
            dfs(root.right,depth+1,root.val)
            
        dfs(root)
        
        return lookup[x][0] != lookup[y][0] and lookup[x][1] == lookup[y][1]
                
        