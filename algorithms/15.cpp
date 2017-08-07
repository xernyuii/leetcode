class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        
        vector<vector<int> >res;
        
        if(nums.size() == 0) return res;
        std::sort(nums.begin(), nums.end());
        
        for(int i = 0; i <= nums.size(); i++){
            
            int target = -nums[i];
            int font = i +1;
            int back = nums.size() - 1;
            
            while(font < back){
                int sum = nums[font] + nums[back];
                
                if(sum < target){
                    font++;
                }
                else if(sum > target){
                    back--;
                }
                else{
                    vector<int> triplet(3, 0);
                    triplet[0] = nums[i];
                    triplet[1] = nums[font];
                    triplet[2] = nums[back];
                    
                    res.push_back(triplet);
                    
                    while(font < back && nums[font] == triplet[1]) font++;
                    while(font < back && nums[back] == triplet[2]) back--;
                }
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i]) i++;
        }

        return res;
    }
};
