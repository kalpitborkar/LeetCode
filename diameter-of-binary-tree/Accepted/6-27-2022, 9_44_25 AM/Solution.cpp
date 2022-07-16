// https://leetcode.com/problems/diameter-of-binary-tree

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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        helper(root, d);
        return d;
    }
    
    int helper(TreeNode *root, int &d)
    {
        if(!root) return 0;
        int ld = helper(root->left, d);
        int rd = helper(root->right, d);
        d = std::max(d, ld + rd);
        return std::max(ld, rd) + 1;
    }
};