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
        std::vector<int> tree1;
        std::vector<int> tree2;
        preOrder(root1, tree1);
        preOrder(root2, tree2);
        
        int iter1 = 0, iter2 = 0;
        int tree1Size = tree1.size(), tree2Size = tree2.size();
        
        std::vector<int> res;
        
        while(iter1 < tree1Size && iter2 < tree2Size)
        {
            if(tree1[iter1] < tree2[iter2]) res.push_back(tree1[iter1++]);
            else res.push_back(tree2[iter2++]);
        }
        while(iter1 < tree1Size) res.push_back(tree1[iter1++]);
        while(iter2 < tree2Size) res.push_back(tree2[iter2++]);
        return res;
    }
    
    void preOrder(TreeNode* root, std::vector<int> &pre)
    {
        if(!root) return;
        preOrder(root->left, pre);
        pre.push_back(root->val);
        preOrder(root->right, pre);
        return;
    }
};