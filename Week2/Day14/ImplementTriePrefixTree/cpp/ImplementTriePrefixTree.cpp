// Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3329/
// Author : Shubhanshu Singh
// Date   : 15-05-2020

/*************************************************************************/
// Time Complexity for Insert Operation: O(m)
// where m is the key length.
// In each iteration of the algorithm,
// we either examine or create a node in the trie till we reach the end of the key.
// This takes only m operations.


// Space Complexity for Insert Operation: O(m)
// In the worst case newly inserted key doesn't share a prefix with the the keys already inserted in the trie.
// We have to add m new nodes, which takes us O(m) space.

/******************************************************************************************/

// Time Complexity for searching a key in a trie: O(m)
// In each step of the algorithm we search for the next key character. 
// In the worst case the algorithm performs m operations.

// Space complexity : O(1)

/******************************************************************************************/

//Time complexity for searching a key prefix in a trie: O(m)

//Space complexity : O(1)


class TrieNode {
public:
    bool isEndOfWord;
    TrieNode *children[26];
    
    TrieNode()
    {
        isEndOfWord = false;
        for(int x = 0;x < 26;++x)
            children[x] = NULL;
    }   
};


class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *current = root;
        
        for(int i=0;i<word.size();++i)
        {
            int x = word[i] - 'a';
            if(current->children[x] == NULL)
                current->children[x] = new TrieNode();
            current = current->children[x];
        }
        current->isEndOfWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *current = root;
        
        for(int i=0;i<word.size();++i)
        {
            int x = word[i] - 'a';
            if(current->children[x] == NULL)
                return false;
            current = current->children[x];
        }
        return current->isEndOfWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *current = root;
        
        for(int i=0;i<prefix.size();++i)
        {
            int x = prefix[i] - 'a';
            if(current->children[x] == NULL)
                return false;
            current = current->children[x];
        }
        return true;
    }
    
private:
    TrieNode *root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */