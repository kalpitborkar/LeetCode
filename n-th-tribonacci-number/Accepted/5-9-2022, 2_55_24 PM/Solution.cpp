// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
    int tribonacci(int n) {
        if(n < 2) return n;
        if(n == 2) return 1;
        int a = 0, b = 1, c = 1, d;
        for(int i = 2; i < n; i++)
        {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return d;
    }
};