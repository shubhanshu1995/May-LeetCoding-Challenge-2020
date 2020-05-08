// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
// Author : Shubhanshu Singh
// Date   : 04-05-2020

/********************************************************************************************************************* 
* Given an arbitrary ransom note string and another string containing letters from all the magazines,
* write a function that will return true if the ransom note can be constructed from the magazines ;
* otherwise, it will return false.

* Each letter in the magazine string can only be used once in your ransom note.

* Note:
* You may assume that both strings contain only lowercase letters.

* canConstruct("a", "b") -> false
* canConstruct("aa", "ab") -> false
* canConstruct("aa", "aab") -> true
********************************************************************************************************************/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> freqRansom; //stores frequency of ransomNote characters
        map<char,int> freqMag; //stores frequency of magazine characters
        
        for(int i=0;i<ransomNote.size();++i)
            freqRansom[ransomNote[i]] += 1;
        
        for(int i=0;i<magazine.size();++i)
            freqMag[magazine[i]] += 1;
        
        map<char, int>::iterator itr;
        int cnt = 0;
        for(itr = freqMag.begin(); itr != freqMag.end(); ++itr)
        {
            if (freqRansom.find(itr->first) != freqRansom.end())
            {
                if(itr->second >= freqRansom[itr->first])
                    cnt = cnt + freqRansom[itr->first];   
            }
        }
        
        if(cnt == ransomNote.size())
            return true;
        return false;
    }
};