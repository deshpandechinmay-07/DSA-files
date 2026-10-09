class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int a=0,b=nums.size()-1;
        while(a<b)
        {
            if(nums[a]%2!=0 && nums[b]%2==0)
            {
                swap(nums[a],nums[b]);
                a++;
                b--;
            }
            else{
                if(nums[a]%2==0)
                {
                    a++;
                }
                if(nums[b]%2!=0)
                {
                    b--;
                }
            }
        }
        return nums;
    }
};
