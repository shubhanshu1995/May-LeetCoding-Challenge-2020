// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/
// Author : Shubhanshu Singh
// Date   : 07-05-2020


/*****************  Approach 2 using DFS (Depth First Search) *******************************/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,int depth,int parent,unordered_map<int,pair<int,int>> &mp)
    {
        if(!root)
            return;
        mp[root->val] = {parent,depth};
        
        dfs(root->left,depth+1,root->val,mp);
        dfs(root->right,depth+1,root->val,mp);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
         
        unordered_map<int,pair<int,int>> mp;
        dfs(root,0,-1,mp);
         
        return mp[x].first != mp[y].first && mp[x].second == mp[y].second;
                  
    }
};