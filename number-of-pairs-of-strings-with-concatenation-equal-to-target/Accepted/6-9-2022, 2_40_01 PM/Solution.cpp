// https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int size = nums.size();
        int res = 0;
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(nums[i] + nums[j] == target && i != j) res ++;
            }
        }
        return res;
    }
};