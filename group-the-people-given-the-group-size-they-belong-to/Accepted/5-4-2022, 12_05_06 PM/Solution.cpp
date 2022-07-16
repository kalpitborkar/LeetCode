// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::vector<std::vector<int>> res;
        std::unordered_map<int, std::vector<int>> map; //Capacity -> people in that group
        for(int i = 0; i < groupSizes.size(); i++)
        {
            map[groupSizes[i]].push_back(i);
            if(groupSizes[i] == map[groupSizes[i]].size())
            {
                res.push_back(map[groupSizes[i]]);
                map[groupSizes[i]].clear();
            }
        }
        return res;
    }
};