// https://leetcode.com/problems/longest-increasing-subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> lis(n,1);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j] && lis[i] < 1 + lis[j])
                {
                    lis[i] = 1 + lis[j];
                }
            }
        }
        return *max_element(lis.begin(), lis.end());
    }
};