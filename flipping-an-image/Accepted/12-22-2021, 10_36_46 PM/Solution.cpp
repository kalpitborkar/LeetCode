// https://leetcode.com/problems/flipping-an-image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &row : image)
        {
            std::reverse(row.begin(), row.end());
            for(auto &v : row)
            {
                v ^= 1;
            }
        }
        return image;
    }
};