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
        l=ListNode(0);
        l3=l;
        flag=0;
        
        while l1 or l2:
            node=ListNode(flag)
            if l1:
                node.val+=l1.val
                l1=l1.next
            if l2:
                node.val+=l2.val
                l2=l2.next
            flag=node.val/10
            node.val%=10
            l3.next=node
            l3=l3.next
        
        if flag:
            l3.next=ListNode(1)
        
        return l.next
                
            
            
        
