// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(), jumpOneStep, jumpTwoStep;
        std::vector<int> dp(n+1);
        for(int i = 2; i <= n; i++)
        {
            jumpOneStep = dp[i-1] + cost[i-1];
            jumpTwoStep = dp[i-2] + cost[i-2];
            dp[i] = std::min(jumpOneStep, jumpTwoStep);
        }
        return dp[n];
    }
};