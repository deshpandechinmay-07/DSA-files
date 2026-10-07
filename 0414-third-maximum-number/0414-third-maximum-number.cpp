class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> n;
        sort(nums.rbegin(), nums.rend());
        
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                n.push_back(nums[i]);
            }
        }
        
        if (n.size() < 3) {
            return n[0];
        }
        
        return n[2];
    }
};
