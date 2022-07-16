// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count[101] = {0};
        for(int i: nums)
        {
            count[i]++;
        }
        int res = 0;
        for(int i = k; i < 101; i++)
        {
            res += count[i]*count[i-k];
        }
        return res;
    }
};