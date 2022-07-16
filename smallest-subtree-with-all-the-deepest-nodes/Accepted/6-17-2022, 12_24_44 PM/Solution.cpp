// https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes

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
    TreeNode* leastCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root || root == p || root == q) return root;
        TreeNode *left = leastCommonAncestor(root->left, p, q);
        TreeNode *right = leastCommonAncestor(root->right, p, q);
        return !left? right: !right? left: root;
    }
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        std::queue<TreeNode*> q;
        q.push(root);
        TreeNode* leftMost = NULL, *rightMost = NULL;
        
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                TreeNode* top = q.front();
                if(i == 0) leftMost = top;
                if(i == n-1) rightMost = top;
                q.pop();
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
        }
        
        return leastCommonAncestor(root, leftMost, rightMost);
    }
};