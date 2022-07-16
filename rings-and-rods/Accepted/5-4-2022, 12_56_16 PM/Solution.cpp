// https://leetcode.com/problems/rings-and-rods

class Solution {
public:
    int countPoints(string rings) {
        std::unordered_map<char, std::unordered_set<char>> map; // rod_no -> rings
        for(int i = 0; i < rings.size(); i += 2)
        {
            map[rings[i+1]].insert(rings[i]);
        }
        int res = 0;
        for(auto i: map)
        {
            if(
            (i.second.find('R') != i.second.end()) &&
            (i.second.find('G') != i.second.end()) &&
            (i.second.find('B') != i.second.end())
            )
            {
                res++;
            }
        }
        return res;
    }
};