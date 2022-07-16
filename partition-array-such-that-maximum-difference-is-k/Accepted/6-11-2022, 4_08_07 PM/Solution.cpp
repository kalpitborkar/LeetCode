// https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        /*
        1. Sort the array
        2. Iterate through the sorted array:
            3. First elem of each subarr is the min elem
            4. If the difference betweem the min elem and the curr elem (max elem) exceeds k, partition.
            5. Repeat
        */
        
        
        std::sort(nums.begin(), nums.end());
        int count = 0, min_elem = nums[0];
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] - min_elem > k)
            {
                count += 1;
                min_elem = nums[i];
            }
        }
        return ++count;
    }
};