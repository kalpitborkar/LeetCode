// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int r = m-1;
        int c = 0;
        int count  = 0;
        
        while(r>=0 && c<n)
        {
            if(grid[r][c] < 0)
            {
                r--;
                count += n-c;
            }
            else
            {
                c++;
            }
        }
        return count;
    }
};