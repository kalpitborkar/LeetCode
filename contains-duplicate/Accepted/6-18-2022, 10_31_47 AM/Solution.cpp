// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        
        for(int i: nums)
        {
            if(set.find(i) != set.end()) return true;
            else set.insert(i);
        }
        return false;
    }
};