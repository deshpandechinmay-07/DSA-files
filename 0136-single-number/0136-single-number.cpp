class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count1 =0;
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
          count1=count(nums.begin(), nums.end(),nums[i]); 

            if(count1==1)
            {
              a=nums[i];
            }
        }
        return a;
    }
};