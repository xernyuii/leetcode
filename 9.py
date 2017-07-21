class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        a = x
        b = 0
        if x < 0 :
            return False
        while a:
            b = b*10+a%10
            a /= 10
        
        if x == b:
            return True
        else:
            return False
