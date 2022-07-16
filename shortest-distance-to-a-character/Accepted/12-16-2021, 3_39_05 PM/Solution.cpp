// https://leetcode.com/problems/shortest-distance-to-a-character

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length(), pos = -n;
        std::vector<int> res(n,n);
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == c)
            {
                pos = i;
            }
            res[i] = i - pos;
        }
        
        for(int i = pos - 1; i >= 0; i--)
        {
            if(s[i] == c)
            {
                pos = i;
            }
            res[i] = std::min(pos - i, res[i]);
        }
        return res;
    }
};