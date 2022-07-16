// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, sum_max = INT_MIN;
        for(int num: nums){
            sum+=num;
            sum_max = max(sum,sum_max);
            if(sum<0) sum=0;
        }
        return sum_max;
    }
};