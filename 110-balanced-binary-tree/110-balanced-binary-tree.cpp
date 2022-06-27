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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return
            std::abs(calculateHeight(root->left) - calculateHeight(root->right)) <= 1 &&
            isBalanced(root->left) &&
            isBalanced(root->right);
    }
    
    int calculateHeight(TreeNode *root)
    {
        if(!root) return 0;
        int leftHeight = calculateHeight(root->left);
        int rightHeight = calculateHeight(root->right);
        return 1 + std::max(leftHeight, rightHeight);
    }
};