class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0,d=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>9)
            {
                d+=nums[i];
            }
            else
            {
                s+=nums[i];
            }
        }
        if(s>d || d>s)
        {
            return true;
        }
        return false;
    }
};