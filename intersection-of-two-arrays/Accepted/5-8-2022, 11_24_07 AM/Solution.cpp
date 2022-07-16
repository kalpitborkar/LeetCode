// https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> res;
        std::unordered_set<int> set(nums1.begin(), nums1.end());
        for(int i: nums2)
        {
            if(set.erase(i)) res.push_back(i);
        }
        return res;
    }
};