class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxEle = INT_MIN, minEle = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            maxEle = max(maxEle, nums[i]);
            minEle = min(minEle, nums[i]);
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != minEle && nums[i] != maxEle)
                count++;
        }
        return count;
    }
};