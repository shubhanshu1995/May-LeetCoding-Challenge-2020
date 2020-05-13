## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
## Author : Shubhanshu Singh
## Date   : 12-05-2020

############################ Approach 1 using depth first search  ############################

## Time Complexity: O(M*N)  where M*N is the number of pixels in the image.
## We might process every pixel.

## Space Complexity: O(N),the size of the implicit call stack when calling dfs.

## Note: We don't need a separate visited matrix 
## Changing the color guarantees we will not go to the same cell again. 


class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        
        color = image[sr][sc]
        
        if color == newColor:
            return image
        
        def dfs(sr,sc):
            if sr < 0 or sr >= len(image) or sc < 0 or sc >= len(image[0]) or image[sr][sc] != color:
                return
            image[sr][sc] = newColor
            
            ## call dfs for top pixel
            dfs(sr-1,sc);

            ## call dfs for bottom pixel
            dfs(sr+1,sc);

            ## call dfs for left pixel
            dfs(sr,sc-1);

            ## call dfs for right pixel
            dfs(sr,sc+1);
            
        ## call dfs
        dfs(sr,sc)
        
        return image
        