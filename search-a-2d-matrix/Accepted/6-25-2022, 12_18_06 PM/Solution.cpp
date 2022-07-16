// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0, high = matrix.size() - 1;
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(matrix[mid][0] == target) return true;
            if(matrix[mid][0] < target) low = mid + 1;
            else high = mid - 1;
        }
        
        int row = high;
        
        if(row >= 0)
        {
            low = 0, high = matrix[0].size() - 1;
        
            while(low <= high)
            {
                int mid = low + (high - low)/2;

                if(matrix[row][mid] == target) return true;
                else if(matrix[row][mid] < target) low = mid + 1;
                else high = mid - 1;
            }
        }
        
        
        return false;
    }
};