class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                if(nums[i]+nums[j]==target)
                {
                    count++;
                    if(count==1)
                    {
                    n.push_back(i);
                    n.push_back(j);
                }
                }
                }
            }
        }
        return n;
    }
};