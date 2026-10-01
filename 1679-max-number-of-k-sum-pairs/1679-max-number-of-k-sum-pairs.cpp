class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int cs=0,c=0,a=0;
        int b=nums.size()-1;
        while(a<b)
        {
            cs=nums[a]+nums[b];
            if(cs==k)
            {
                c++;
                a++;
                b--;
            }
            else if(cs>k)
            {
                b--;
            }
            else
            {
                a++;
            }
        }
        return c;
    }
};
