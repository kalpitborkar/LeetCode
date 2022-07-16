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
    std::vector<TreeNode*> sorted;
    
    void inorder(TreeNode *root)
    {
        if(!root) return;
        inorder(root->left);
        sorted.push_back(root);
        inorder(root->right);
    }
    
    TreeNode* createBSTfromArr(std::vector<TreeNode*> &arr, int left, int right)
    {
        if(left >= right) return nullptr;
        int mid = left + (right - left)/2;
        TreeNode *root = arr[mid];
        root->left = createBSTfromArr(arr, left, mid);
        root->right = createBSTfromArr(arr, mid+1, right);
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return createBSTfromArr(sorted, 0, sorted.size());
    }
};