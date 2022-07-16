// https://leetcode.com/problems/find-target-indices-after-sorting-array

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int before = 0, target_frequency = 0;
        std::vector<int> res;
        for(int i: nums)
        {
            if(i < target) before++;
            else if(i == target) target_frequency++;
        }
        for(int i = 0; i < target_frequency; i++)
            res.push_back(before + i);
        return res;
    }
};