// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ')
            {
                int j = i;
                while(j < s.size() && s[j] != ' ')
                {
                    j++;
                }
                std::reverse(s.begin() + i, s.begin() + j);
                i = j;
            }
        }
        return s;
    }
};