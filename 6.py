class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        a=[""]*numRows
        p=0
        n=numRows
        flag=0
        if n==1:
            return s
        
        for i in s:
            a[p]=a[p]+i
            if flag==0 and p<n-1:
                p=p+1
            elif flag==0 and p==n-1:
                p=p-1
                flag=1
            elif flag==1 and p>0:
                p=p-1
            elif flag==1 and p==0:
                flag=0
                p=p+1
        
        c=""
        for i in a:
            c=c+i
        
        return c
        
        
