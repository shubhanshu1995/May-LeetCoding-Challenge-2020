## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
## Author : Shubhanshu Singh
## Date   : 12-05-2020

############################ Approach 2 using breadth first search with the help of python collection deque  ############################

## Time Complexity: O(M*N)  where M*N is the number of pixels in the image.
## We might process every pixel.

## Space Complexity: O(N),the size of the implicit call stack when calling dfs.

## Note: We don't need a separate visited matrix 
## Changing the color guarantees we will not go to the same cell again. 






class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        
        color = image[sr][sc];
        
        if color == newColor:
            return image;
        
        q = collections.deque([(sr,sc)]);

        
        while q:
            x,y = q.popleft()
            image[x][y] = newColor
            
            for a,b in ((0,1),(1,0),(0,-1),(-1,0)):
                r = x + a
                c = y + b
                
                if(r < 0 or r >= len(image) or c < 0 or c >= len(image[0]) or image[r][c] != color):
                    continue;
                    
                q.append((r,c));
        
        return image;
        