class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> answer(length, 1);
        
        int leftProduct = 1;
        for (int i = 0; i < length; i++) {
            answer[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        int rightProduct = 1;
        for (int i = length - 1; i >= 0; i--) {
            answer[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return answer;
    }
};
