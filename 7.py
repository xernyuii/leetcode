class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        a=x
        flag=0
        if(a<0):
            a=-a
            flag=1
        p=0
        while a:
            p=p*10+a%10
            a=a//10
        
        if p>((1<<31)-1) or p<0:
            return 0
        
        if flag==1:
            p=-p
        
        return p
        
        
        
        
