// https://leetcode.com/problems/max-area-of-island

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                    res = std::max(areaOfIsland(grid, i, j), res);
            }
        }
        return res;
    }
    
    int areaOfIsland(std::vector<std::vector<int>> &grid, int i, int j)
    {
        if( i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1)
        {
            grid[i][j] = 0;
            return 1 + areaOfIsland(grid, i+1, j) + areaOfIsland(grid, i-1,j) + areaOfIsland(grid, i, j+1) + areaOfIsland(grid, i, j-1);
        }
        return 0;
    }
};