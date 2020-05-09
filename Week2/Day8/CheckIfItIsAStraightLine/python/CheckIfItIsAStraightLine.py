## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/
## Author : Shubhanshu Singh
## Date   : 09-05-2020


###############################  Using Slope Formula & Cross Product to check collinearity ##########################


class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        
        (x0, y0), (x1, y1) = coordinates[: 2]
        deltaX = x1 - x0
        deltaY = y1 - y0
        
        return all( (y - y0)*deltaX == (x - x0)*deltaY  for x, y in coordinates[2:])
        
                
        