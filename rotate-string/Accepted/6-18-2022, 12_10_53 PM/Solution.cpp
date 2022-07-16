// https://leetcode.com/problems/rotate-string

class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == goal[0])
            {
                std::string rotated = s.substr(i) + s.substr(0, i);
                if(rotated == goal) return true;
            }
        }
        return false;
    }
};