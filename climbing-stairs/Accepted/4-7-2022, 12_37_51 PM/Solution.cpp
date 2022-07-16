// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
        int lastStep = 1;
        int oneStepBefore = 1;
        int numberOfWays;
        for(int i = 0; i < n-1 ; i++)
        {
            numberOfWays = lastStep + oneStepBefore;
            oneStepBefore = lastStep;
            lastStep = numberOfWays;
        }
        return numberOfWays;
    }
};