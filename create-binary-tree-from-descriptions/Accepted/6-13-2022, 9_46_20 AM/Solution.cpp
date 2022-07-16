// https://leetcode.com/problems/create-binary-tree-from-descriptions

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

/*
1. Create a map from int -> TreeNode* and bool->TreeNode* (isChild)
2. Iterate through the descriptions:
    3. Create currNode
    4. Check for the child node - if it doesnt exist, create it. If it does exist, use the map.

*/

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        std::unordered_map<int, TreeNode*> getNode;
        std::unordered_map<int, bool> isChild;
        
        for(std::vector<int> &description: descriptions)
        {
            if(getNode.count(description[0]) == 0)
            {
                TreeNode *currNode = new TreeNode(description[0]);
                getNode[description[0]] = currNode;
            }
            
            if(getNode.count(description[1]) == 0)
            {
                TreeNode *childNode = new TreeNode(description[1]);
                getNode[description[1]] = childNode;
            }
            if(description[2] == 1) getNode[description[0]]->left = getNode[description[1]];
            else getNode[description[0]]->right = getNode[description[1]];
            isChild[description[1]] = true;
        }
        
        TreeNode *ans = NULL;
        for(std::vector<int> &description: descriptions)
        {
            if(isChild[description[0]] != true)
            {
                ans = getNode[description[0]];
                break;
            }
        }
        return ans;
    }
};








