// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0, iter = 0;
        for(int i: nums)
        {
            if(i == 0) zeroCount++;
            else
            {
                nums[iter++] = i;
            }
        }
        while(zeroCount--)
        {
            nums[iter++] = 0;
        }
    }
};