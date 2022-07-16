// https://leetcode.com/problems/rotating-the-box

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int r = box.size(), c = box[0].size();
        std::vector<std::vector<char>> res(c, std::vector<char>(r));
        
        for(int i = 0; i < r; i++)
        {
            int empty = c-1;
            for(int j = c-1; j >= 0; j--)
            {
                if(box[i][j] == '*')
                {
                    empty = j-1;
                }
                if(box[i][j] == '#')
                {
                    box[i][j] = '.';
                    box[i][empty] = '#'; 
                    empty--;
                }
            }
        }
        for(int i = 0; i < r; i++)
        {
            for(int j = c-1; j >= 0; j--)
            {
                res[j][r-i-1] = box[i][j];
            }
        }
        return res;
    }
};