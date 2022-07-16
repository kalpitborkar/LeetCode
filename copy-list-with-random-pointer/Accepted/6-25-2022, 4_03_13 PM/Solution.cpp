// https://leetcode.com/problems/copy-list-with-random-pointer

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *curr = head;
        std::unordered_map<Node*, Node*> map;
        
        while(curr)
        {
            map[curr] = new Node(curr->val);
            curr = curr->next;
        }
        
        curr = head;
        
        while(curr)
        {
            map[curr]->next = map[curr->next];
            map[curr]->random = map[curr->random];
            curr = curr->next;
        }
        
        return map[head];
    }
};