class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        a=['#']
        for i in s:
            a.append(i)
            a.append('#')
        
        p=0
        ll=0
        for i in range(len(a)):
            l=0
            while i-l-1>=0 and i+l+1<len(a) and a[i-l-1]==a[i+l+1]:
                l=l+1
                if l>ll:
                    ll=l
                    p=i
        
        c=[]
        for i in range(p-ll,p+ll):
            if a[i]!='#':
                c.append(a[i])
        d="".join(c)
        return d
