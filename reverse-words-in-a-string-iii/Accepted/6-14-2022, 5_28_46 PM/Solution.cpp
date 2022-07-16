// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    string reverseWords(string s) {
        int start = 0, n = s.size();
        
        for(int i = 0; i <= n; i++)
        {
            if(s[i] == ' ' || i == n)
            {
                std::reverse(s.begin()+start, s.begin()+i);
                start = i+1;
            }
        }
        return s;
    }
};