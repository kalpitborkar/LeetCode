// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

class Solution {
public:
    int numberOfSteps(int num) {
        int res = 0;
        while(num)
        {
            while(num % 2 == 0)
            {
                num = num/2;
                res++;
            }
            num -= 1;
            res++;
        }
        return res;
    }
};