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
    int pre = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root->right)
        {
            bstToGst(root->right);
        }
        pre += root->val;
        root->val = pre;
        if(root->left)
        {
            bstToGst(root->left);
        }
        return root;
    }
};