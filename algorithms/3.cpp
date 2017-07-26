class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        set<char>S;
        deque<char>D;
        for(int i=0;i<s.size();i++){
            if(S.find(s[i])==S.end()){
                S.insert(s[i]);
                D.push_front(s[i]);
                len=max(len,int(S.size()));
            }
            else{
                len=max(len,int(S.size()));
                while(D.back()!=s[i]){
                    S.erase(D.back());
                    D.pop_back();
                }
                S.erase(D.back());
                D.pop_back();
                
                S.insert(s[i]);
                D.push_front(s[i]);
                len=max(len,int(S.size()));
            }
        }
        
        return len;
    }
};
