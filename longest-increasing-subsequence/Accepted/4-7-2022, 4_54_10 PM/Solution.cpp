// https://leetcode.com/problems/longest-increasing-subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> lis(nums.size(),1);
        for(int i = 0; i < nums.size(); i++)
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