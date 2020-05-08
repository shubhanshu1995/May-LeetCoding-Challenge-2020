// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/
// Author : Shubhanshu Singh
// Date   : 07-05-2020


/*****************  Approach 1 using BFS (Breadth First Search) *******************************/



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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        
        if(!root)
            return false;
        
        q.push(root);
        int depth = 0;
        unordered_map<int,pair<int,int>> mp;
        
        
        while(!q.empty())
        {
            int breadth = q.size();
            
            while(breadth--)
            {
                TreeNode *v = q.front();
                q.pop();
                
                if(depth == 0)
                {
                    if(v->val == x)
                        mp[x] = {-1,depth};
                    else if(v->val == y)
                        mp[y] = {-1,depth};
                }
                
                if(v->left){
                    if(v->left->val == x)
                        mp[x] = {v->val,depth+1};
                    else if(v->left->val == y)
                        mp[y] = {v->val,depth+1};   
                    q.push(v->left);
                }
                
                if(v->right){
                    if(v->right->val == x)
                        mp[x] = {v->val,depth+1};
                    else if(v->right->val == y)
                        mp[y] = {v->val,depth+1};  
                    q.push(v->right);
                }
            }
            depth++;
        }
        
        return mp[x].first != mp[y].first && mp[x].second == mp[y].second;
    }
};