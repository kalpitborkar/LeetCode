class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        int first = 1, second = 2;
        for(int i = 0; i < n - 2; i++)
        {
            int temp = second;
            second += first;
            first = temp;
        }
        return second;
    }
};