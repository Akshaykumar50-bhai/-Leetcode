class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
         int n=prices.size();
         int mina = prices[0];
         for(int i=0;i<n;i++){
             mina = min(mina,prices[i]);
             profit = max(profit,prices[i]-mina);
         }
         return profit;

    }
};