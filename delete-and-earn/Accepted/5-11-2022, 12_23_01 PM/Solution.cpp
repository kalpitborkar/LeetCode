// https://leetcode.com/problems/delete-and-earn

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        std::vector<int> buckets(n, 0);
        for(int i: nums)
            buckets[i] += i;
        
        int take = 0, skip = 0;
        for(int i = 0; i < n; i++)
        {
            int takei = buckets[i] + skip;
            int skipi = std::max(skip, take);
            take = takei;
            skip = skipi;
        }
        return std::max(take, skip);
    }
};