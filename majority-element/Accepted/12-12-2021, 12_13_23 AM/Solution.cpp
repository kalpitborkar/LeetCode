// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> counter;
        for(int i : nums)
        {
            counter[i] += 1;
            if(counter[i] > nums.size()/2) return i;
        }
        return 0;
    }
};