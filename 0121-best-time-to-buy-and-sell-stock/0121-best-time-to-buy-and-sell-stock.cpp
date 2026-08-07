class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int x: prices) {
            if (x < buy) {
                buy = x;
            } 
            
            profit = max(profit, x - buy);
        }
        return profit;
    }
};