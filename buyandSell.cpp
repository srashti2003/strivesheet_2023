class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int cp = INT_MAX;
      
        for(int i=0;i<prices.size();i++){
            cp = min(prices[i],cp);
            profit = max(profit,prices[i]-cp);
        }
        return profit;
    }
};
