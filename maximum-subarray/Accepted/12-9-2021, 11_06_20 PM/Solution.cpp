// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], sum = 0;
        
        for(int i : nums)
        {
            sum += i;
            ans = std::max(sum, ans);
            sum = std::max(sum, 0);
        }
        
        return ans;
    }
};