// https://leetcode.com/problems/find-target-indices-after-sorting-array

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        std::sort(begin(nums), end(nums));
        std::vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};