class Solution {
public:
    string convert(string s, int numRows) {
        string a[numRows+1];
        
        int p=0;
        int flag=0;
        if(numRows==1) return s;
        for(auto i : s){
            a[p].push_back(i);
            if(flag==0&&p<numRows-1) {
                p++;
            }
            else if(flag==0&&p==numRows-1){
                flag=1;
                p--;
            }
            else if(flag==1&&p>0){
                p--;
            }
            else if(flag==1&&p==0){
                flag=0;
                p++;
            }
        }
        
        string c;
        for(auto i :a){
            c.append(i);
        }
        return c;
    }
    
};
