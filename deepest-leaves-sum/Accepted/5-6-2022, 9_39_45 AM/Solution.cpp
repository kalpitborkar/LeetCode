// https://leetcode.com/problems/deepest-leaves-sum

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
    int deepestLeavesSum(TreeNode* root) {
        int max_depth = findDepth(root);
        return findSum(root, 0, max_depth-1);
    }
    
    int findDepth(TreeNode *root)
    {
        if(root == NULL) return 0;
        return std::max(1+findDepth(root->left), 1+findDepth(root->right));
    }
    
    int findSum(TreeNode *root, int depth, int max_depth)
    {
        if(root == NULL) return 0;
        if(depth == max_depth) return root->val;
        return findSum(root->left, depth+1, max_depth)+findSum(root->right, depth+1, max_depth);
    }
};