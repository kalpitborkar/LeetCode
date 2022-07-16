// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int min_jump = 0;
        for(int i = nums.size()-2; i >= 0; i--)
        {
            min_jump++;
            if(nums[i] >= min_jump) min_jump = 0;
        }
        return min_jump == 0;
    }
};