// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3328/
// Author : Shubhanshu Singh
// Date   : 14-05-2020



/******************************************* Remove K Digits *****************************************************/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(num.size() == k)
            return "0";
        
        stack<char> justStack;
        
        for(char c:num){
            while( k && !justStack.empty() && int(justStack.top()) > int(c) )
            {
                justStack.pop();
                k--;
            } 
            justStack.push(c);
        } 
        
        //if still no change in k then remove k elements
        if(k) 
            while(k--)
            {
                justStack.pop();
            }
        
        // remove leading 0s ,if present
        stack<char> anotherStack;
        while(!justStack.empty())
        {
            anotherStack.push(justStack.top());
            justStack.pop();
        }
        
        while(anotherStack.top()=='0' && anotherStack.size()!=1)
            anotherStack.pop();
        
        //return the answer
        num="";
        while(!anotherStack.empty())
        {
            num.push_back(anotherStack.top());
            anotherStack.pop();
        }
        return num;
        
    }
};