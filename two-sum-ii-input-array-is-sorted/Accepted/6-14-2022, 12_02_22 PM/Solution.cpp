// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0; i < numbers.size(); i++)
        {
            int toFind = target - numbers[i];
            int secondIndex = binarySearch(numbers, toFind, i+1);
            if(secondIndex != -1)
            {
                std::vector<int> res{i+1, secondIndex+1};
                return res;
            }
        }
        std::vector<int> res;
        return res;
    }
    
    int binarySearch(std::vector<int> &numbers, int target, int left)
    {
        int right = numbers.size()-1;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(numbers[mid] == target) return mid;
            if(numbers[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};