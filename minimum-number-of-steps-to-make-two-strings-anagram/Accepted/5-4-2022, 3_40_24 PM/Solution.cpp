// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram

class Solution {
public:
    int minSteps(string s, string t) {
        std::unordered_map<char, int> map;
        for(char c: s)
        {
            map[c]++;
        }
        for(char c: t)
        {
            map[c]--;
        }
        int res = 0;
        for(auto i: map)
        {
            if(i.second > 0) res += i.second;
        }
        return res;
    }
};