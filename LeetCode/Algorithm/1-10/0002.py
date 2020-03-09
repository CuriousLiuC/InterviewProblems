# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        re = ListNode(0)
        r = re                  #这里类似一个头节点？
        
        temp = 0
        while l1 or l2:
            if l1:
                a = l1.val
            else:
                a = 0
            if l2:
                b = l2.val
            else:
                b = 0

            bias = (a+b+temp)%10
            r.next = ListNode(bias)
            r = r.next
            temp = (a+b+temp)//10
            
            if l1!=None:
                l1 = l1.next
            if l2!=None:
                l2 = l2.next
        
        if temp>0:
            r.next = ListNode(temp)
        
        return re.next












