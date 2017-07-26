class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int L[5000];
        int p=0;
        for(auto i:nums1){
            L[p]=i;
            p++;
        }
        for(auto i:nums2){
            L[p]=i;
            p++;
        }
        sort(L,L+p);
        if(p%2==1){
            return double(L[p/2]);
        }
        else{
            return (L[p/2]+L[p/2-1])/2.0;
        }
        
        
    }
};
