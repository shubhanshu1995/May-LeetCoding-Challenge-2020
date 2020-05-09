// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/
// Author : Shubhanshu Singh
// Date   : 09-05-2020


/*****************  Approach 2 using Slope Formula & Cross Product to check collinearity *******************************/

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int deltaY = coordinates[1][1] - coordinates[0][1];
        int deltaX = coordinates[1][0] - coordinates[0][0];     
        for( int i=2; i < coordinates.size(); i++ ) {
            vector<int> temp = coordinates[i];
            if( deltaX*(temp[1] - coordinates[0][1]) != deltaY*(temp[0] - coordinates[0][0]) )
                return false;
        }
        return true;

    }
};
