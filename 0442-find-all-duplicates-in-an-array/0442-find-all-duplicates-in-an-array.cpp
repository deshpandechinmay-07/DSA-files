class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> n;
        unordered_set<int> seen;
        unordered_set<int> added;

        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i]) > 0) {
                if (added.count(nums[i]) == 0) {
                    n.push_back(nums[i]);
                    added.insert(nums[i]);
                }
            } else {
                seen.insert(nums[i]);
            }
        }
        return n;
    }
};
