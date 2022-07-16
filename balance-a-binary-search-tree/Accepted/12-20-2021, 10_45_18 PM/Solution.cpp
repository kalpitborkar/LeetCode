// https://leetcode.com/problems/balance-a-binary-search-tree

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
    std::vector<TreeNode *> sortedArr;
    
    TreeNode* balanceBST(TreeNode* root) {
        inorderTraverse(root);
        return sortedArrToBST(0, sortedArr.size() - 1);
    }
    
    void inorderTraverse(TreeNode *root)
    {
        if(!root)
        {
            return;
        }
        inorderTraverse(root->left);
        sortedArr.push_back(root);
        inorderTraverse(root->right);
    }
    
    TreeNode *sortedArrToBST(int start, int end)
    {
        if(start > end)
        {
            return NULL;
        }
        int mid = (start + end)/2;
        TreeNode *root = sortedArr[mid];
        root->left = sortedArrToBST(start, mid-1);
        root->right = sortedArrToBST(mid+1, end);
        return root;
    }
    
};