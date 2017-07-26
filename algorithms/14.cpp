class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        int minlen = strs[0].size();
        for(int i = 0; i < strs.size(); i++){
            minlen = min(minlen, (int)strs[i].size());
        }
        int h = 0;
        int flag = 0;
        for(h = 0; h < minlen; h++){
            for(int i = 0; i < strs.size(); i++){
                if(strs[i][h] != strs[0][h]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                break;
            }
        }
        cout<<h<<" "<<strs[0][0]<<" "<<strs[0][1];
        if(h==0) return "";
        return strs[0].substr(0, h);
        
        
    }
};
