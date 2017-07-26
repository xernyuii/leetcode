class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return false;
        int a=x;
        int b=0;
        while(a){
            b=b*10+a%10;
            a/=10;
        }
        if(x==b) return true;
        else return false;
        
    }
};
