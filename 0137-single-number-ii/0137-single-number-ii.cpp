class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0,a=0;
        for(int i=0;i<nums.size();i++)
        {
            c=count(nums.begin(),nums.end(),nums[i]);
            if(c==1)
            {
                 a=nums[i];
            }
        }
        return a;
    }
};