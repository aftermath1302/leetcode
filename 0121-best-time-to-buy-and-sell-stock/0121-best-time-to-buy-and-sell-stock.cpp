class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int x: prices) {
            buy = min(x,buy);            
            profit = max(profit, x - buy);
        }
        return profit;
    }
};