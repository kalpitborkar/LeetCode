// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        /*
        1. Create a map from ( group size -> vector contaning people)
        2. length = groupSizes.size()
        3. Iterate from 0 to (n-1)
            4. Add people to respective groups
            5. If the group becomes full after adding, add the group to result and clear the vector
        */
        
        std::vector<std::vector<int>> res;
        std::unordered_map<int, std::vector<int>> map;
        int size = groupSizes.size();
        
        for(int i = 0; i < size; i++)
        {
            map[groupSizes[i]].push_back(i);
            if(map[groupSizes[i]].size() == groupSizes[i])
            {
                res.push_back(map[groupSizes[i]]);
                map[groupSizes[i]].clear();
            }
        }
        return res;
    }
};