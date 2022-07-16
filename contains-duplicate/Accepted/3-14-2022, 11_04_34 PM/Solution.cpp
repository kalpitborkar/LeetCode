// https://leetcode.com/problems/contains-duplicate

#include <algorithm>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::vector<int> appeared;
        
        for(int i=0;i<nums.size();i++)
        {
            if(std::find(appeared.begin(), appeared.end(), nums[i]) != appeared.end())
            {
                return true;
            }
            appeared.push_back(nums[i]);
        }
        return false;
    }
};