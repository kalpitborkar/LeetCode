// https://leetcode.com/problems/destination-city

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::unordered_set<std::string> set;
        for(std::vector<std::string> path: paths)
        {
            set.insert(path[1]);
        }
        for(std::vector<std::string> path: paths)
        {
            set.erase(path[0]);
        }
        return *set.begin();
    }
};