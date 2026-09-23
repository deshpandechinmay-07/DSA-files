class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 1. Remove the trailing placeholder zeros from nums1
        while (nums1.size() > m) 
        {
            nums1.pop_back(); // Fixed: pop_back() takes no arguments
        }
        
        // 2. Append elements from nums2 into nums1
        for(int j=0; j<n; j++) // Fixed: changed j<n-1 to j<n to include all elements
        {
            nums1.push_back(nums2[j]);
        }
        
        // 3. Sort the final merged array
        sort(nums1.begin(), nums1.end());
    }
};
