// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        std::unordered_set<int> set(nums.begin(), nums.end());
        
        for(int &num: nums)
        {
            if(set.count(num - 1)) continue;
            int j = 1;
            while(set.count(num + j)) j++;
            res = std::max(j, res);
        }
        
        return res;
    }
};