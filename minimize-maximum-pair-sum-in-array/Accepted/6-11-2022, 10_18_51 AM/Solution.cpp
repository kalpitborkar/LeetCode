// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        
        std::sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n/2; i++)
        {
            res = std::max(res, nums[i] + nums[n-i-1]);
        }
        return res;
    }
};