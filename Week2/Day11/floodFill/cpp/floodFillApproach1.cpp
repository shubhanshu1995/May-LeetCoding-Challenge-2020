// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
// Author : Shubhanshu Singh
// Date   : 12-05-2020

/***************** Approach 1 using depth first search *******************************/

// Time Complexity: O(M*N)  where M*N is the number of pixels in the image.
// We might process every pixel.

// Space Complexity: O(N),the size of the implicit call stack when calling dfs.

// Note: We don't need a separate visited matrix 
// Changing the color guarantees we will not go to the same cell again. 


class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int color)
    {
        //base case
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != color)
            return;
        image[sr][sc] = newColor;
        
        //call dfs for top pixel
        dfs(image,sr-1,sc,newColor,color);
        
        //call dfs for bottom pixel
        dfs(image,sr+1,sc,newColor,color);
        
        //call dfs for left pixel
        dfs(image,sr,sc-1,newColor,color);
        
        //call dfs for right pixel
        dfs(image,sr,sc+1,newColor,color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        
        if(color == newColor)
            return image;
        
        //call dfs
        dfs(image,sr,sc,newColor,color);
        
        return image;
    }
    
    
};