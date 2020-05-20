## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3329/
## Author : Shubhanshu Singh
## Date   : 15-05-2020


#################################################################################################################
## Time Complexity for Insert Operation: O(m)
## where m is the key length.
## In each iteration of the algorithm,
## we either examine or create a node in the trie till we reach the end of the key.
## This takes only m operations.


## Space Complexity for Insert Operation: O(m)
## In the worst case newly inserted key doesn't share a prefix with the the keys already inserted in the trie.
## We have to add m new nodes, which takes us O(m) space.

#################################################################################################################

## Time Complexity for searching a key in a trie: O(m)
## In each step of the algorithm we search for the next key character. 
## In the worst case the algorithm performs m operations.

## Space complexity : O(1)

#################################################################################################################

## Time complexity for searching a key prefix in a trie: O(m)

## Space complexity : O(1)



class Trie:
    def __init__(self):
        self.trie = {}

    def insert(self, word):
        current = self.trie
        for x in word:
            if x not in current:
                current[x] = {}
            current = current[x]
        current['#'] = '#'

    def search(self, word):
        current = self.trie
        for x in word:
            if x not in current:
                return False
            current = current[x]
        if '#' in current:
            return True
        return False

    def startsWith(self, prefix):
        current = self.trie
        for x in prefix:
            if x not in current:
                return False
            current = current[x]
        return True