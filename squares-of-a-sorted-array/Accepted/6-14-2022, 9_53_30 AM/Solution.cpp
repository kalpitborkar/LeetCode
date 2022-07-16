// https://leetcode.com/problems/squares-of-a-sorted-array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size()-1, i = right;
        std::vector<int> res(nums.size());
        while(left <= right)
        {
            if(abs(nums[right] > abs(nums[left]))) res[i--] = pow(nums[right--],2);
            else res[i--] = pow(nums[left++],2);
        }
        return res;
    }
};