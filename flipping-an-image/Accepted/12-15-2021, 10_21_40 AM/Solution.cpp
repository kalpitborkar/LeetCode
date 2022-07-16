// https://leetcode.com/problems/flipping-an-image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &row : image)
        {
            std::reverse(row.begin(), row.end());
            for(auto &i : row)
            {
                i ^= 1;
            }
        }
        return image;
    }
};