// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words = 0;
        for(std::string sentence : sentences)
        {
            int words = 1;
            for(char c : sentence)
            {
                if(c == ' ') words++;
            }
            max_words = std::max(words, max_words);
        }
        return max_words;
    }
};