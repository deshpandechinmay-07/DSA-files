class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        for (int i = 0; i < (int)nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return nums.back();
    }
};