// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceSoFar = INT_MAX, maxProfitSoFar = 0;
        for(int i = 0 ; i < prices.size(); i++)
        {
            minPriceSoFar = std::min(minPriceSoFar, prices[i]);
            maxProfitSoFar = std::max(maxProfitSoFar, prices[i] - minPriceSoFar);
        }
        return maxProfitSoFar;
    }
};