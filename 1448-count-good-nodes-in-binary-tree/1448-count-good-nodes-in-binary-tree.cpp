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
    int res = 0;
    void dfs(TreeNode *root, int maxVal)
    {
        if(!root) return;
        if(root->val >= maxVal)
        {
            res++;
            maxVal = root->val;
        }
        dfs(root->left, maxVal);
        dfs(root->right, maxVal);
    }
    
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return res;
    }
};