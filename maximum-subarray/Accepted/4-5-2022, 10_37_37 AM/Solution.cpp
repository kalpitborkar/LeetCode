// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            maxSum = std::max(currSum, maxSum);
            currSum = std::max(0, currSum);
        }
        return maxSum;
    }
};