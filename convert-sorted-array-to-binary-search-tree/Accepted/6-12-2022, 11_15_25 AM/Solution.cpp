// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size());
    }
    
    TreeNode* helper(std::vector<int> &nums, int left, int right)
    {
        if(left >= right) return nullptr;
        int mid = left + (right-left)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = helper(nums, left, mid);
        root->right = helper(nums, mid+1, right);
        return root;
    }
};