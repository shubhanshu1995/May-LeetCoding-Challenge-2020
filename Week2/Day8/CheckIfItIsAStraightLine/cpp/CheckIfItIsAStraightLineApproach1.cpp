// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/
// Author : Shubhanshu Singh
// Date   : 09-05-2020


/*****************  Approach 1 using Area of Triangle Formula *******************************/

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    
    bool isCollinear(int x1,int y1,int x2,int y2,int x3,int y3)
    {
        int area_of_triangle =  ceil(0.5* ( x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * ( y1 - y2 )));
        
        //if area of triangle formed by threee points is zero, then they are collinear
        return area_of_triangle == 0;
    }
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        for( int i=0; i < coordinates.size()-2; i++ ) {
            int x1 = coordinates[i][0];
            int y1 = coordinates[i][1];
            
            int x2 = coordinates[i+1][0];
            int y2 = coordinates[i+1][1];
            
            int x3 = coordinates[i+2][0];
            int y3 = coordinates[i+2][1];
            
            if( !isCollinear(x1,y1,x2,y2,x3,y3) )
                return false;
        }
        return true;

    }
};