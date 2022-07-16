// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, minPrice = INT_MAX;
        
        for(int price: prices)
        {
            minPrice = std::min(price, minPrice);
            res = std::max(res, price - minPrice);
        }
        
        return res;
    }
};