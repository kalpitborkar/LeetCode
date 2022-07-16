// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        std::string result = s;
        for(int i = 0; i < indices.size(); i++)
        {
            result[indices[i]] = s[i];
        }
        return result;
    }
};