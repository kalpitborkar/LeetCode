// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree

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
    int curr_sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root->right != NULL)
        {
            bstToGst(root->right);
        }
        curr_sum = root->val = curr_sum + root->val;
        if(root->left != NULL)
        {
            bstToGst(root->left);
        }
        return root;
    }
};