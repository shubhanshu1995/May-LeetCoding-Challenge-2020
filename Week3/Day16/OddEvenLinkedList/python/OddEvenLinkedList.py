## Source : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3331/
## Author : Shubhanshu Singh
## Date   : 17-05-2020


## Time Complexity: O(n)
## Space Complexity: O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        
        if(not head):
            return head
        
        odd = head
        evenHead = head.next
        even = head.next
        
        while(even and even.next):
            odd.next = odd.next.next
            even.next = even.next.next
            even = even.next
            odd = odd.next
        
        odd.next = evenHead
        
        return head
        