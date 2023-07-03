#https://leetcode.com/problems/reverse-linked-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        elif head.next == None:
            return head
        
        prev, curr, nextt = None, head, head.next

        while curr:
            nextt = curr.next
            curr.next = prev
            prev = curr
            curr = nextt
        return prev