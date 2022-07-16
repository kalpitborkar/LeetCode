// https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent

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
    int sumEvenGrandparent(TreeNode* root) {
        return helper(root);
    }
    
    int helper(TreeNode *root, int parent = 1, int grand_parent = 1)
    {
        if(!root) return 0;
        return (helper(root->left, root->val, parent) + helper(root->right, root->val, parent) + (grand_parent % 2 == 0 ? root->val : 0));
    }
};