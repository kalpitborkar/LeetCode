// https://leetcode.com/problems/group-anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> map;
        std::vector<std::vector<std::string>> res;
        
        for(std::string &str: strs)
        {
            std::string currStr = str;
            std::sort(currStr.begin(), currStr.end());
            map[currStr].push_back(str);
        }
        
        for(auto &anagrams: map)
        {
            res.push_back(anagrams.second);
        }
        
        return res;
    }
};