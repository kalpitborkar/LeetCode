// https://leetcode.com/problems/delete-and-earn

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        std::vector<int> buckets(n, 0);
        for(int i: nums) buckets[i] += i;
        std::vector<int> skip(n,0), take(n,0);
        for(int i = 1; i < n; i++)
        {
            int takei = buckets[i] + skip[i-1];
            int skipi = std::max(take[i-1], skip[i-1]);
            take[i] = takei;
            skip[i] = skipi;
        }
        return std::max(take[n-1], skip[n-1]);
    }
};