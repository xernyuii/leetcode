class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        L=0;
        p=[];
        for c in s:
            if p.count(c)==0:
                p.append(c)
                L=max(L,len(p))
            else:
                L=max(L,len(p))
                w=p.index(c)
                p=p[w+1:]
                p.append(c)
                L=max(L,len(p))
        return L
                
                
