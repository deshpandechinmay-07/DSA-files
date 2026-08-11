class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> result(candies.size());

        for(int i = 0; i < candies.size(); i++)
        {
            int newCandies = candies[i] + extraCandies;

            bool ok = true;

            for(int j = 0; j < candies.size(); j++)
            {
                if(newCandies < candies[j])
                {
                    ok = false;
                    break;
                }
            }

            result[i] = ok;
        }

        return result;
    }
};
