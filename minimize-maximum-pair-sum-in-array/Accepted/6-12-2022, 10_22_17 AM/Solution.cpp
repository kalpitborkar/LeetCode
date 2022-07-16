// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size(), res = 0;
        
        for(int i = 0; i < n/2; i++)
        {
            res = std::max(nums[i] + nums[n-i-1], res);
        }
        return res;
    }
};