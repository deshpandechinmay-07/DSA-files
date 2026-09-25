#include <vector>
#include <unordered_set>

class Solution {
public:
    int findDuplicate(std::vector<int>& nums) { 
        std::unordered_set<int> my_set;
        int len = nums.size();
        
        for (int i = 0; i < len; i++) {
            if (!my_set.insert(nums[i]).second) {
                return nums[i];
            }
        }

        return len;
    }
};
