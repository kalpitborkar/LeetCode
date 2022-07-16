// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        std::unordered_set<char> set(jewels.begin(), jewels.end());
        for(char c: stones)
            if(set.count(c)) res++;
        return res;
    }
};