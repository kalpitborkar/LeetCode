// https://leetcode.com/problems/relative-sort-array

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        std::vector<int> count(1001, 0);
        for(int n: arr1) count[n]++;
        int i = 0;
        for(int n: arr2)
            while(count[n]-- > 0) arr1[i++] = n;
        for(int n = 0; n < count.size(); n++)
            while(count[n]-- > 0) arr1[i++] = n;
        return arr1;
    }
};