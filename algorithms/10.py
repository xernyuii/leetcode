 import sys   
sys.setrecursionlimit(1000000)

class Solution(object):
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        if not p:
            if not s:
                return True
            else:
                return False
        
        if len(p)>1 and p[1] == '*':
            if self.isMatch(s, p[2:]) or ((s) and (s[0] == p[0] or p[0] == '.') and self.isMatch(s[1:], p)):
                return True
            else:
                return False
        
        else:
            if (s) and (s[0] == p[0] or p[0] == '.' ) and self.isMatch(s[1:], p[1:]):
                return True
            else:
                return False
        
        
