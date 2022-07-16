// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree

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
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int maxLevelSum = INT_MIN;
        int res = 0;
        std::queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            level++;
            int n = q.size();
            int currLevelSum = 0;
            for(int i = 0; i < n; i++)
            {
                TreeNode* top = q.front();
                q.pop();
                currLevelSum += top->val;
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            
            if(currLevelSum > maxLevelSum)
            {
                maxLevelSum = currLevelSum;
                res = level;
            }
        }
        return res;
    }
};