// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reach = 0;
        for(int i = 0; i < nums.size() && i <= max_reach; i++)
        {
            max_reach = std::max(i + nums[i], max_reach);
        }
        return max_reach >= nums.size()-1;
    }
};