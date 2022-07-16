// https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::unordered_set<char> allowed_set;
        for(char c: allowed) allowed_set.insert(c);
        int res = words.size();
        
        for(std::string word: words)
        {
            for(char c: word)
            {
                if(allowed_set.count(c) == 0)
                {
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};