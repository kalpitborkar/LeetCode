// https://leetcode.com/problems/n-ary-tree-level-order-traversal

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL) return {};
        
        std::queue<Node*> q;
        q.push(root);
        
        std::vector<std::vector<int>> res;
        
        while(!q.empty())
        {
            int n = q.size();
            
            std::vector<int> level;
            
            for(int i = 0; i < n; i++)
            {
                Node* top = q.front();
                q.pop();
                level.push_back(top->val);
                
                for(Node* child: top->children)
                    q.push(child);
            }
            
            res.push_back(level);
        }
        return res;
    }
};