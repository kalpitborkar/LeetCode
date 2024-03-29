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
    int deepest = 0, sum = 0;
    int deepestLeavesSum(TreeNode* root, int depth = 0) {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            if(deepest == depth)
            {
                sum += root->val;
            }
            else if(deepest < depth)
            {
                deepest = depth;
                sum = root->val;
            }
        }
        deepestLeavesSum(root->left, depth + 1);
        deepestLeavesSum(root->right, depth + 1);
        return sum;
    }
};