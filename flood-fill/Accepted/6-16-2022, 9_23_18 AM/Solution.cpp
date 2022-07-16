// https://leetcode.com/problems/flood-fill

class Solution {
public:
    void dfs(std::vector<std::vector<int>> &image, int sr, int sc, int color, int starting_color)
    {
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] == color || image[sr][sc] != starting_color)
            return;
        
        image[sr][sc] = color;
        dfs(image, sr+1, sc, color, starting_color);
        dfs(image, sr-1, sc, color, starting_color);
        dfs(image, sr, sc+1, color, starting_color);
        dfs(image, sr, sc-1, color, starting_color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int starting_color = image[sr][sc];
        dfs(image, sr, sc, color, starting_color);
        return image;
    }
};