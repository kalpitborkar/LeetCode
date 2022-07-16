// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> answer;
        int n = nums.size();
        int left = 1;
        for(int i=0; i<n;i++){
            if(i>0){
                left *= nums[i-1];
            }
            answer.push_back(left);
        }
        int right = 1;
        for(int i = n-1; i>=0; i--){
            if(i<n-1)
            {
                right *= nums[i+1];
            }
            answer[i] *= right;
        }
        return answer;
    }
};