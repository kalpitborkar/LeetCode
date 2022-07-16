// https://leetcode.com/problems/minimum-bit-flips-to-convert-number

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int diff = start ^ goal;
        int res = 0;
        while(diff)
        {
            if(diff % 2 == 1) res++;
            diff /= 2;
        }
        return res;
    }
};