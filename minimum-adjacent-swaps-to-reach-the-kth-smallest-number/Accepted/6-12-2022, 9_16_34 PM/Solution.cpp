// https://leetcode.com/problems/minimum-adjacent-swaps-to-reach-the-kth-smallest-number

class Solution {
public:
    
    int minSteps(std::string s1, std::string s2)
    {
        int i = 0, j = 0, res = 0;
        int size = s1.size();
        
        while(i < size)
        {
            j = i;
            while(s2[i] != s1[j])
            {
                j++;
            }
            while(i < j)
            {
                std::swap(s1[j], s1[j-1]);
                j--;
                res++;
            }
            i++;
        }
        return res;
    }
    
    
    int getMinSwaps(string num, int k) {
        std::string original = num;
        
        while(k--)
        {
            std::next_permutation(num.begin(), num.end());
        }
        return minSteps(original, num);
    }
};