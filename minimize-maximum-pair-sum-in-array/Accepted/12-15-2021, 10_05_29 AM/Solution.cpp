// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        std::sort(begin(nums), end(nums));
        int ans = 0, length = nums.size();
        
        for(int i = 0 ; i < length/2 ; i++)
        {
            ans = std::max(ans, nums[i] + nums[length - i - 1]);
        }
        return ans;
    }
};