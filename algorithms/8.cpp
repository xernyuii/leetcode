class Solution {
public:
    int myAtoi(string str) {
        int flag=0;
        int done=0;
        long long num=0;
        int un=0;
        int did=0;
        int sig=0;
        int ju=0;
        for(auto i : str){
            if(i=='-') {
                if(flag==1){
                    flag=0;
                }
                else if (flag==0){
                    flag=-1;
                }
                else if(flag==-1){
                    flag=0;
                }
                sig=-1;
                done=1;
                un=1;
            }
            if(i=='+') {
                if(flag==-1){
                    flag=0;
                }
                else if(flag==0){
                    flag=1;
                }
                else if(flag==1){
                    flag=0;
                }
                sig=1;
                done=1;
                un=1;
            }
            if(i>='0'&&i<='9'){
                num=num*10+i-'0';
                done=1;
                did=1;
                if(num<0||num>INT_MAX) ju=1;
            }
            if(i==' ') sig=0;
            if(i>='a'&&i<='z') break;
            if(i==' '&&done==1) break;

        }
        if(did==0) return 0;
        
        
        cout<<ju<<" "<<un<<" "<<flag<<" "<<num;
        if(ju==1&&(flag==1||un==0)) return INT_MAX;
        if(ju==1&&flag==-1) return INT_MIN;
        if((num<0||num>INT_MAX)&&sig!=-1) {cout<<"hi";return INT_MAX;}
        if((num<0)&&sig==-1) return INT_MIN;
        if(un==1)
            num=flag*num;

        return num;
    }
};
