// https://leetcode.com/problems/coin-change

class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        int arr[++n];
        arr[0] = 0;
        std::sort(std::begin(coins), std::end(coins));
        
        for(int i = 1; i < n; i++)
        {
            arr[i] = INT_MAX;
            
            for(int c: coins)
            {
                if(i-c<0)
                {
                    break;
                }
                if(arr[i-c] != INT_MAX)
                {
                    arr[i] = std::min(arr[i], 1 + arr[i-c]);
                }
            }
        }
        if(arr[--n] == INT_MAX) return -1;
        return arr[n];
    }
};