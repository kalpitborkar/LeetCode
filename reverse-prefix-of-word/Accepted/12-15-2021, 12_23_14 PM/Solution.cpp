// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i = 0 ; i < word.size(); i++)
        {
            if(word[i] == ch)
            {
                std::reverse(begin(word), begin(word) + i + 1);
                return word;
            }
        }
        return word;
    }
};