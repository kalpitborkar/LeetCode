// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int res = 0, oneStepBack = 0, twoStepBack = 0;
        for(int i = 2; i <= n; i++)
        {
            int oneStep = oneStepBack + cost[i - 1];
            int twoStep = twoStepBack + cost[i - 2];
            res = std::min(oneStep, twoStep);
            twoStepBack = oneStepBack;
            oneStepBack = res;
        }
        return res;
    }
};