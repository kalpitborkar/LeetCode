// https://leetcode.com/problems/all-possible-full-binary-trees

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
    vector<TreeNode*> allPossibleFBT(int n) {
        std::vector<TreeNode*> ans;
        if(n < 1 || n%2 == 0) return ans;
        for(int k = 2; k < n; k += 2)
        {
            std::vector<TreeNode*> t1 = allPossibleFBT(k-1);
            std::vector<TreeNode*> t2 = allPossibleFBT(n-k);
            int n1 = t1.size(), n2 = t2.size();
            for(int i = 0; i < n1; i++)
            {
                for(int j = 0; j < n2; j++)
                {
                    TreeNode* newRoot = new TreeNode(0);
                    newRoot->left = t1[i];
                    newRoot->right = t2[j];
                    ans.push_back(newRoot);
                }
            }
        }
        if(ans.empty()) ans.push_back(new TreeNode(0));
        return ans;
    }
};