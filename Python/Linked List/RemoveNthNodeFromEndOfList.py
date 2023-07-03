#https://leetcode.com/problems/remove-nth-node-from-end-of-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        nprev, curr = head, head
        if not (head and head.next):
            head = None
            return head

        i = 0
        while curr:
            if i >= n + 1:
                nprev = nprev.next
            curr = curr.next
            i += 1
        if n == 1:
            nprev.next = None
        elif nprev == head and i <= n:
            head = head.next
        else:
            nprev.next = nprev.next.next
        return head