// https://leetcode.com/problems/build-array-from-permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        std::vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};