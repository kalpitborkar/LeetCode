// https://leetcode.com/problems/all-elements-in-two-binary-search-trees

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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        std::stack<int> stk1, stk2;
        std::vector<int> res;
        inOrder(root1, stk1);
        inOrder(root2, stk2);
        while(!stk1.empty() && !stk2.empty())
        {
            if(stk2.top() > stk1.top())
            {
                res.push_back(stk1.top());
                stk1.pop();
            }
            else
            {
                res.push_back(stk2.top());
                stk2.pop();
            }
        }
        while(!stk1.empty())
        {
            res.push_back(stk1.top());
            stk1.pop();
        }
        while(!stk2.empty())
        {
            res.push_back(stk2.top());
            stk2.pop();
        }
        return res;
    }
    
    void inOrder(TreeNode *root, std::stack<int> &stk)
    {
        if(root == NULL) return;
        inOrder(root->right, stk);
        stk.push(root->val);
        inOrder(root->left, stk);
    }
};