// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
    bool checkIfPangram(string sentence) {
        std::unordered_set<char> alphabets;
        for(char c: sentence)
        {
            alphabets.insert(c);
        }
        return (alphabets.size() == 26);
    }
};