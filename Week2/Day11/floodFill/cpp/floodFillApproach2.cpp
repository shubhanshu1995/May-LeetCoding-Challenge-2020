// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
// Author : Shubhanshu Singh
// Date   : 12-05-2020

/***************** Approach 2 using breadth first search with the help of C++ STL's queue *******************************/

// Time Complexity: O(M*N)  where M*N is the number of pixels in the image.
// We might process every pixel.

// Space Complexity: O(N)


// Note: We don't need a separate visited matrix 
// Changing the color guarantees we will not go to the same cell again. 


class Solution {
public:
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        
        if(color == newColor)
            return image;
        
        queue<pair<int,int>>  q;
        q.push({sr,sc});
        
        vector<pair<int,int>> dirs = {{0,1},{1,0},{-1,0},{0,-1}};
        
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            
            q.pop();
            image[x][y] = newColor;
            for(auto it:dirs)
            {
                int r = x + it.first;
                int c = y + it.second;
                
                if(r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != color)
                    continue;
                
                q.push({r,c});
            }
        }
        
        return image;
    }
    
    
};