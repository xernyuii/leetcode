class Solution {
public:
    string longestPalindrome(string s) {
        
        string a;
        a.push_back('#');
        for(auto i:s){
            a.push_back(i);
            a.push_back('#');
        }
        int l=0;
        int p=0;
        int ll=0;
        for(int i=0;i<a.size();i++){
            l=0;
            while(i-l-1>=0&&i+l+1<a.size()&&a[i-l-1]==a[i+l+1]){
                l++;
                if(l>ll){
                    //cout<<"!"<<a[i-l-1]<<" "<<a[i+l+1]<<" "<<i<<l<<endl;
                    ll=l;
                    p=i;
                }
            }
        }
        //cout<<a<<endl;
        //cout<<p<<endl;
        //cout<<ll<<endl;
        string c;
        for(int i=p-ll;i<=p+ll;i++){
            if(a[i]!='#') c.push_back(a[i]);
        }
        
        
        return c;
        
    }
};
