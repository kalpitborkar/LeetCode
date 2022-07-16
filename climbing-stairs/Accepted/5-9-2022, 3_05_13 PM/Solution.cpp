// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        int a = 1, b = 2, c;
        for(int i = 1; i < n-1; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};