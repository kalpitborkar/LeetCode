// https://leetcode.com/problems/house-robber-ii

class Solution {
private:
    int robber(std::vector<int> &nums, int start, int n)
    {
        int res = 0;
        int prev = 0, prev2 = 0;
        
        for(int i = start; i <= n; i++)
        {
            res = std::max(prev, nums[i] + prev2);
            prev2 = prev;
            prev = res;
        }
        return res;
    }
    
public:
    int rob(vector<int>& nums) {
        int n = nums.size() - 1;
        if(n == 0) return nums[0];
        return std::max(robber(nums, 0, n - 1), robber(nums, 1, n));
    }
};