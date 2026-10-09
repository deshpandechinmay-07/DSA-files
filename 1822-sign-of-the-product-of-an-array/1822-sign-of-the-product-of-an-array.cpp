class Solution {
public:
    int arraySign(vector<int>& nums) {
         double n=1;
        for(int i=0;i<nums.size();i++)
        {
           n*=nums[i];
        }
        if(n>0)
        {
            return 1;
        }
        else if(n<0)
        {
            return -1;
        }
        return 0;
    }
};