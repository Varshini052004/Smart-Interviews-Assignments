class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0, mini = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            mini = min(mini, prices[i]);
            p = max(p, prices[i] - mini);
        }
        return p;
    }
};
