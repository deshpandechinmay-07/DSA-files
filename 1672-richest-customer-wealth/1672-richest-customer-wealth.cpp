class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        for (const auto& customer : accounts) {
            int current_wealth = 0;
            for (int bank_balance : customer) {
                current_wealth += bank_balance;
            }
            max_wealth = max(max_wealth, current_wealth);
        }
        return max_wealth;
    }
};
