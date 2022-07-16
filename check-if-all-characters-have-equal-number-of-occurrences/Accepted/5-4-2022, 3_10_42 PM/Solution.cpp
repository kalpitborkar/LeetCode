// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        std::unordered_map<char, int> map; // char -> freq
        for(char c: s)
        {
            map[c]++;
        }
        int freq = map.begin()->second;
        for(auto i: map)
        {
            if(i.second != freq) return false;
        }
        return true;
    }
};