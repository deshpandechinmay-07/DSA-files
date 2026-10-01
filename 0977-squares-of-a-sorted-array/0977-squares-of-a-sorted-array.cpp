class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> n;
        int a = 0;
        int b = nums.size() - 1;
        
        while (a <= b) {
            if (abs(nums[a]) > abs(nums[b])) {
                n.push_back(nums[a] * nums[a]);
                a++;
            } else {
                n.push_back(nums[b] * nums[b]);
                b--;
            }
        }
        
        reverse(n.begin(), n.end());
        return n;
    }
};
