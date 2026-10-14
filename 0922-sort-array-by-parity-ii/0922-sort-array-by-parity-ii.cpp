class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int a = 0;
        int b = nums.size() - 1;
        while (a < nums.size() && b >= 0) {
            if (a % 2 == 0 && nums[a] % 2 == 0) {
                a++;
            }
            else if (b % 2 != 0 && nums[b] % 2 != 0) {
                b--;
            }
            else if (a % 2 == 0 && nums[a] % 2 != 0 && b % 2 != 0 && nums[b] % 2 == 0) {
                swap(nums[a], nums[b]);
                a++;
                b--;
            }
            else {
                if (a % 2 != 0) a++;
                if (b % 2 == 0) b--;
            }
        }
        return nums;
    }
};
