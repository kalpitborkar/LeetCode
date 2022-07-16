// https://leetcode.com/problems/max-increase-to-keep-city-skyline

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        std::vector<int> maxHeightRow(n, 0);
        std::vector<int> maxHeightCol(n, 0);
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                maxHeightRow[i] = std::max(grid[i][j], maxHeightRow[i]);
                maxHeightCol[j] = std::max(grid[i][j], maxHeightCol[j]);
            }
        }
        
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                res += std::min(maxHeightRow[i], maxHeightCol[j]) - grid[i][j];
            }
        }
        return res;
    }
};