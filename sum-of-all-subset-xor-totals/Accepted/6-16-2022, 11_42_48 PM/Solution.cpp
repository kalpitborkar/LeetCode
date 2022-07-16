// https://leetcode.com/problems/sum-of-all-subset-xor-totals

class Solution {
public:
    int helper(std::vector<int> &nums, int index, int currentXOR)
    {
        if(index == nums.size()) return currentXOR;
        int withElement = helper(nums, index + 1, currentXOR ^ nums[index]);
        int withoutElement = helper(nums, index + 1, currentXOR);
        return withElement + withoutElement;
    }
    
    int subsetXORSum(vector<int>& nums) {
        return helper(nums, 0, 0);
    }
};