class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        flag=0
        done=0
        num=0
        un=0
        did=0
        sig=0
        ju=0
        for  i in str:
            if i=='-' :
                if flag==1 :
                    flag=0
                
                elif flag==0:
                    flag=-1
                
                elif flag==-1 :
                    flag=0
                
                sig=-1
                done=1
                un=1
            
            if i=='+': 
                if flag==-1 :
                    flag=0
                
                elif flag==0:
                    flag=1
                
                elif flag==1:
                    flag=0
                
                sig=1
                done=1
                un=1
            
            if i>='0' and i<='9' :
                num=num*10+int(i)
                done=1
                did=1
                if num<0 or num>((1<<31)-1):
                    ju=1
            
            if i==' ':
                sig=0
            if i>='a' and i<='z':
                break;
            if i==' ' and done==1:
                break

        if did==0 :
            return 0
        
        if ju==1 and (flag==1 or un==0):
            return ((1<<31)-1)
        if ju==1 and flag==-1:
            return (-(1<<31))
        if (num<0 or num>((1<<31)-1)) and sig!=-1:
            return ((1<<31)-1)
        if num<0 and sig==-1:
            return (-(1<<31))
        if un==1:
            num=flag*num;

        return num;
