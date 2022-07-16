// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(std::string s : operations)
        {
            if(s == "++X" || s == "X++") x++;
            else x--;
        }
        return x;
    }
};