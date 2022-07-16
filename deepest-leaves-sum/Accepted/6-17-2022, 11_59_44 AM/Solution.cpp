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
        int res = 0, n;
        std::queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            res = 0, n = q.size();
            
            for(int i = 0; i < n; i++)
            {
                TreeNode* top = q.front();
                q.pop();
                res += top->val;
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
        }
        return res;
    }
};