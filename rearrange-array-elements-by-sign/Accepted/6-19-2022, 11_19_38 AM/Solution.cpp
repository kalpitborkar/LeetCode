// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positiveIndex = 0, negativeIndex = 1;
        std::vector<int> res(nums.size());
        
        for(int num: nums)
        {
            if(num > 0)
            {
                res[positiveIndex] = num;
                positiveIndex += 2;
            }
            else
            {
                res[negativeIndex] = num;
                negativeIndex += 2;
            }
        }
        
        return res;
    }
};