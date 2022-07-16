// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        std::vector<int> ans;
        for(int i : nums)
        {
            sum += i;
            ans.push_back(sum);
        }
        return ans;
    }
};