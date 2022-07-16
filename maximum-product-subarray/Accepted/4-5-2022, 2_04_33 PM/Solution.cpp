// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = nums[0], maxProd = 1, minProd = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 0)
            {
                std::swap(maxProd, minProd);
            }
            maxProd = std::max(nums[i], nums[i]*maxProd);
            minProd = std::min(nums[i], nums[i]*minProd);
            result = std::max(result, maxProd);
        }
        return result;
    }
};