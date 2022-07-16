// https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int res = 0;
        std::unordered_map<std::string, int> map;
        for(std::string s: nums) map[s]++;
        for(auto [s, freq]: map)
        {
            if(target.find(s) == 0)
            {
                if(s + s == target) res += (freq)*(freq-1);
                else res += freq * map[target.substr(s.size())];
            }
        }
        return res;
    }
};