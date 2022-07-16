// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor

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
    int maxAncestorDiff(TreeNode* root, int mx = 0, int mn = INT_MAX) {
        return root ? std::max(maxAncestorDiff(root->left, std::max(mx, root->val), std::min(mn, root->val)), maxAncestorDiff(root->right, std::max(mx, root->val), std::min(mn, root->val))) : mx - mn; 
    }
};