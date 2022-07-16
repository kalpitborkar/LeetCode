// https://leetcode.com/problems/sort-the-matrix-diagonally

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        std::unordered_map<int, std::vector<int>> diag;
        
        int m = mat.size();
        int n = mat[0].size();
        
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                diag[i-j].push_back(mat[i][j]);
            }
        }
        
        for(int i = -(n-1); i <= m-1; i++)
        {
            std::sort(diag[i].begin(), diag[i].end());
        }
        
        for(int i = m-1; i >= 0; i--)
        {
            for(int j = n-1; j >= 0; j--)
            {
                mat[i][j] = diag[i-j].back();
                diag[i-j].pop_back();
            }
        }
        return mat;
    }
};