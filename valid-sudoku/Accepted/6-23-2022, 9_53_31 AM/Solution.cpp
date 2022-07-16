// https://leetcode.com/problems/valid-sudoku

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int squares[3][3][9] = {0};
        
        for(int r = 0; r < 9; r++)
        {
            for(int c = 0; c < 9; c++)
            {
                if(board[r][c] != '.')
                {
                    int num = board[r][c] - '1';
                    if(rows[r][num]++) return false;
                    if(cols[c][num]++) return false;
                    if(squares[r/3][c/3][num]++) return false;
                }
            }
        }
        return true;
    }
};