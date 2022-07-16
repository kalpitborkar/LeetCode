// https://leetcode.com/problems/sort-array-by-increasing-frequency

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        std::unordered_map<int, int> count;
        for(int n: nums) count[n]++;
        std::sort(nums.begin(), nums.end(), [&](int a, int b)
        {
            return count[a] == count[b] ? a > b : count[a] < count[b];
        });
        return nums;
    }
};