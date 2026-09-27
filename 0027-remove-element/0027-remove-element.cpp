class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer to place the next valid element
        
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is not the one we want to remove
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move it to the front
                k++;               // Move the write pointer forward
            }
        }
        
        return k; // k is the new length of the valid elements
    }
};
