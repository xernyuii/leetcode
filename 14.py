class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        p = ""
        if len(strs) == 0:
            return ""
        if "" in strs:
            return ""
        if len(strs) == 1:
            return strs[0]
        for i in range(len(strs[0])):
            for j in range(len(strs)):
                if len(strs[j]) - 1 < i or strs[j][i] != strs[0][i]:
                    print("hi")
                    p = strs[0][:i]
                    return p
                    
        return strs[0]
            
                
        
