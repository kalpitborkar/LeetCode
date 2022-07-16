// https://leetcode.com/problems/rotate-image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        std::reverse(matrix.begin(), matrix.end());
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 1+i; j < matrix.size(); j++)
            {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};