// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> numsEncountered;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(numsEncountered.find(nums[i]) != numsEncountered.end()) return true;
            else
            {
                numsEncountered.insert(nums[i]);
            }
        }
        return false;
    }
};