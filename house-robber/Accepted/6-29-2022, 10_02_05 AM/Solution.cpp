// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rob(vector<int>& nums) {
        int res = 0, prev = 0, prev2 = 0;
        
        for(int i: nums)
        {
            res = std::max(prev, i +  prev2);
            prev2 = prev;
            prev = res;
        }
        return res;
    }
};