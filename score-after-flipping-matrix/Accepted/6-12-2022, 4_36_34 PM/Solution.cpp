// https://leetcode.com/problems/score-after-flipping-matrix

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int res = (1 << (n-1))*m;
        
        for(int j = 1; j < n; j++)
        {
            int same = 0;
            for(int i = 0; i < m; i++)
            {
                if(grid[i][j] == grid[i][0]) same++;
            }
            res += (1 << (n-j-1))*std::max(same, m-same);
        }
        return res;
    }
};