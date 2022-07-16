// https://leetcode.com/problems/coin-change

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int minCoinsRequired[amount+1];
        minCoinsRequired[0] = 0;
        std::sort(coins.begin(), coins.end());
        for(int i = 1; i < amount+1; i++)
        {
            minCoinsRequired[i] = INT_MAX;
            for(int c: coins)
            {
                if(i - c < 0) break;
                if(minCoinsRequired[i-c] != INT_MAX)
                {
                    minCoinsRequired[i] = std::min(minCoinsRequired[i],1 + minCoinsRequired[i-c]);
                }
            }
        }
        if(minCoinsRequired[amount] != INT_MAX) return minCoinsRequired[amount];
        return -1;
    }
};