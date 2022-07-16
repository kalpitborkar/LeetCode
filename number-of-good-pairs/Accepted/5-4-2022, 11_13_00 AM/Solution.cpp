// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        std::unordered_map<int, int> count;
        for(int i: nums)
        {
            count[i]++;
        }
        for(auto i: count)
        {
            res += (i.second*(i.second-1))/2;
        }
        return res;
    }
};