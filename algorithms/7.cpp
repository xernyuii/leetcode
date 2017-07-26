class Solution {
public:
    int reverse(int x) {
        int flag=0;
        int a=x;
        if(a<0) {
            a=-a;
            flag=1;
        }
        long long p=0;
        
        while(a){
            p=p*10+(a%10);
            a/=10;
        }
        cout<<p;
        if(p>INT_MAX||p<0) return 0;
        if(flag==1) p=-p;
        return p;
    }
};
