// https://leetcode.com/problems/number-of-1-bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int numberOfOnes = 0;
        
        while(n != 0)
        {
            numberOfOnes += (n&1);
            n = (unsigned)n>>1;
        }
        return numberOfOnes;
    }
};