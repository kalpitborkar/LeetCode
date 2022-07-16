// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0) zeroCount++;
            else
            {
                int temp = nums[i];
                nums[i] = 0;
                nums[i-zeroCount] = temp;
            }
        }
    }
};