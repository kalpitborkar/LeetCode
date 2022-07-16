// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        for(int i : nums)
        {
            if(i != 0)
            {
                nums[insertPos++] = i;
            }
        }
        while(insertPos < nums.size())
        {
            nums[insertPos++] = 0;
        }
    }
};