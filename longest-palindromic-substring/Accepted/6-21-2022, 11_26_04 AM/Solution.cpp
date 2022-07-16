// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    int lo = 0, maxLen = 0;
    
    void extendPalindrome(std::string s, int i, int j)
    {
        while(i >= 0 && j < s.size() && s[i] == s[j])
        {
            i--;
            j++;
        }
        
        if(j - i - 1 > maxLen)
        {
            lo = i + 1;
            maxLen = j - i - 1;
        }
    }

    string longestPalindrome(string s) {
        int len = s.size();
        if(len < 2) return s;
        
        for(int i = 0; i < len - 1; i++)
        {
            extendPalindrome(s, i, i);
            extendPalindrome(s, i, i + 1);
        }
        
        return s.substr(lo, maxLen);
    }
};