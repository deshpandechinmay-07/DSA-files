class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int c = 0, cs = 0, b = 0;
        int min_length = nums.size() + 1;

        while (b < nums.size()) {
            cs += nums[b];
            
            if (cs >= target) {
                while (cs >= target) {
                    min_length = min(min_length, b - c + 1);
                    cs -= nums[c];
                    c++;
                }
            }
            b++;
        }

        return (min_length > nums.size()) ? 0 : min_length;
    }
};
