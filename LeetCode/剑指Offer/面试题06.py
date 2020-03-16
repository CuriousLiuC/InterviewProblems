# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reversePrint(self, head):
        """
        :type head: ListNode
        :rtype: List[int]
        """
        p = ListNode()
        p = head
        a = []
        while p:
            print(p.val)
            a.append(p.val)
            p = p.next
        a.reverse()
        return a


