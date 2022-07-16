// https://leetcode.com/problems/divide-array-into-equal-pairs

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        std::unordered_map<int, int> map;
        
        for(int i: nums)
            map[i] = (map[i] + 1) % 2;
        
        for(auto i: map)
            if(i.second != 0) return false;
        
        return true;
    }
};