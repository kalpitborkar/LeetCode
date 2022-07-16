// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> charCount;
        
        for(char c: s)
        {
            charCount[c]++;
        }
        
        for(char c: t)
        {
            charCount[c]--;
        }
        
        for(auto i: charCount)
        {
            if(i.second != 0) return false; 
        }
        
        return true;
    }
};