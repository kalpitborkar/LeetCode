// https://leetcode.com/problems/find-the-difference-of-two-arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(), nums1.end()), set2(nums2.begin(), nums2.end());
        std::vector<std::vector<int>> ans(2);
        for(int n: set1)
            if(set2.count(n) == 0) ans[0].push_back(n);
        for(int n: set2)
            if(set1.count(n) == 0) ans[1].push_back(n);
         return ans;   
    }
};