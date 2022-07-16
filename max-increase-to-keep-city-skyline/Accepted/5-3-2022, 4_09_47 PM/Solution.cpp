// https://leetcode.com/problems/max-increase-to-keep-city-skyline

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        std::vector<int> max_row(grid.size(), 0), max_col(grid[0].size(), 0);
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                max_row[i] = std::max(max_row[i], grid[i][j]);
                max_col[j] = std::max(max_col[j], grid[i][j]);
            }
        }
        int res = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid.size(); j++)
            {
                res += std::min(max_row[i], max_col[j]) - grid[i][j];
            }
        }
        return res;
    }
};