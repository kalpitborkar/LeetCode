// https://leetcode.com/problems/flipping-an-image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int length = image.size();
        for(auto& row : image)
        {
            for(int i = 0 ; i < length/2; i++)
            {
                if(row[i] == row[length - i - 1])
                {
                    row[i] = row[length - i - 1] ^= 1;
                }
            }
            if(length%2 == 1)
            {
                row[length/2] ^= 1;
            }
        }
        return image;
    }
};