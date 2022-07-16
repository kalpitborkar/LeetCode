// https://leetcode.com/problems/reduce-array-size-to-the-half

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        std::vector<int> count(100001, 0);
        for(int n: arr) count[n]++;
        std::sort(count.begin(), count.end(), greater<int>());
        int arr_size = arr.size();
        int res = 0, cnt = 0;
        for(int n: count)
        {
            cnt += n;
            res++;
            if(cnt >= arr_size/2) return res;
        }
        return res;
    }
};