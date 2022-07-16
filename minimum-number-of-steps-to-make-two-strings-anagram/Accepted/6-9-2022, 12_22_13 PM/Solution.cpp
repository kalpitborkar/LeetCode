// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram

class Solution {
public:
    int minSteps(string s, string t) {
        std::vector<int> bucket(27);
        for(char c: s)
        {
            bucket[c-'a']++;
        }
        for(char c: t)
        {
            bucket[c-'a']--;
        }
        int count = 0;
        for(int i = 0 ; i < 27; i++)
        {
            if(bucket[i] < 0) count -= bucket[i];
            else count += bucket[i];
        }
        return (count/2);
    }
};