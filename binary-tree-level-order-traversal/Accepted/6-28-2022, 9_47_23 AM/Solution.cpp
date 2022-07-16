// https://leetcode.com/problems/binary-tree-level-order-traversal

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> res;
        std::queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            std::vector<int> row;
            for(int i = 0; i < n; i++)
            {
                TreeNode *top = q.front();
                q.pop();
                if(top != NULL)
                {
                    row.push_back(top->val);
                    q.push(top->left);
                    q.push(top->right);
                }
            }
            if(row.size() > 0) res.push_back(row);
        }
        return res;
    }
};