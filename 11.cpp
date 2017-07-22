class Solution {
public:
    int maxArea(vector<int>& height) {
        int h=0;
        int C=0;
        while(1){
            int l=0;
            int r=height.size()-1;
            while(height[l] < h) l++;
            while(height[r] < h) r--;
            C=max(C, (r - l ) * h);
            if(l >= r) break;
            h++;
        }
        return C;
    }
};
