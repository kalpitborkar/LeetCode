// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int dp = 0, dp1 = 0, dp2 = 0, jumpOneStep, jumpTwoStep;
        for(int i = 2; i <= n; i++)
        {
            jumpOneStep = dp1 + cost[i-1];
            jumpTwoStep = dp2 + cost[i-2];
            dp = std::min(jumpOneStep, jumpTwoStep);
            dp2 = dp1;
            dp1 = dp;
        }
        return dp;
    }
};