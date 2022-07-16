// https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res  = words.size();
        std::unordered_set<char> set(allowed.begin(), allowed.end());
        for(std::string word: words)
        {
            for(char c: word)
            {
                if(set.find(c) == set.end())
                {
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};