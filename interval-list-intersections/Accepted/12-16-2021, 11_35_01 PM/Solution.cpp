// https://leetcode.com/problems/interval-list-intersections

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        std::vector<std::vector<int>> v;
        int i = 0, j = 0;
        
        while(i < firstList.size() && j < secondList.size())
        {
            int l = std::max(firstList[i][0], secondList[j][0]);
            int u = std::min(firstList[i][1], secondList[j][1]);
            if(l <= u)
            {
                v.push_back({l, u});
            }
            if(firstList[i][1] < secondList[j][1])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return v;
    }
};