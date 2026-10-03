class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        if(k==0)
        {
            return nums[k];
        }
        return nums[k-1];
    }
};