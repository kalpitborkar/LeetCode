// https://leetcode.com/problems/find-and-replace-pattern

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        std::vector<std::string> res;
        for(std::string word: words)
        {
            if(toPattern(word) == toPattern(pattern))
            {
                res.push_back(word);
            }
        }
        return res;
    }
    
    std::string toPattern(std::string s)
    {
        std::unordered_map<char, int> map;
        for(char c: s)
        {
            if(map.count(c) == 0)
            {
                map[c] = map.size();
            }
        }
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = 'a' + map[s[i]];
        }
        std::cout<<s;
        return s;
    }
};