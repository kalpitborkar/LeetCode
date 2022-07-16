// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        std::vector<int> result;
        for(std::vector<int> query: queries)
        {
            result.push_back(numOfPointsInside(points, query));
        }
        return result;
    }
    int numOfPointsInside(vector<vector<int>>& points, vector<int> query)
    {
        int count = 0;
        for(std::vector<int> point: points)
        {
            if(distance(point[0],point[1],query[0],query[1]) <= query[2])
            {
                count++;
            }
        }
        return count;
    }
    double distance(int x1, int y1, int x2, int y2)
    {
        return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    }
};