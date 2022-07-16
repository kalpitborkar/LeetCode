// https://leetcode.com/problems/find-common-characters

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        std::vector<int> count(26, INT_MAX);
        std::vector<std::string> res;
        for(std::string word: words)
        {
            std::vector<int> count1(26, 0);
            for(char c: word)
                count1[c-'a']++;
            for(int i = 0; i < 26; i++)
                count[i] = std::min(count[i], count1[i]);
        }
        for(int i = 0; i < 26; i++)
            for(int j = 0; j < count[i]; j++)
                res.push_back(std::string(1, i+'a'));
        return res;
    }
};