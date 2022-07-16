// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string ans = "";
        
        for(int i = 0; i < std::max(word1.length(), word2.length()); i++)
        {
            if(i < word1.length())
            {
                ans += word1[i];
            }
            if(i < word2.length())
            {
                ans += word2[i];
            }
        }
        return ans;
    }
};