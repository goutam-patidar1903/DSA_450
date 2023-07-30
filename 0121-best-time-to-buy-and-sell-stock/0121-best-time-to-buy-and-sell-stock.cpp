class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell=prices[0];
        int buy=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
                sell=prices[i];
            }
            else if(prices[i]>sell)
            {
                sell=prices[i];
            }
            profit=max(profit,sell-buy);
        }
        return profit;
    }
};