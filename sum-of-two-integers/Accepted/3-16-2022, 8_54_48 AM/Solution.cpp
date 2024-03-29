// https://leetcode.com/problems/sum-of-two-integers

class Solution {
public:
    int getSum(int a, int b) {
        int carry;
        while(b != 0)
        {
            carry = a&b;
            a = a^b;
            b = (unsigned)carry<<1;
        }
        return a;
    }
};