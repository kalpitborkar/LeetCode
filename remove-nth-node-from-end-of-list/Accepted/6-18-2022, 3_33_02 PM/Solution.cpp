// https://leetcode.com/problems/remove-nth-node-from-end-of-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *front = head, *iter = head;
        
        for(int i = 0; i < n; i++)
        {
            front = front->next;
        }
        
        if(!front) return head->next;
        
        while(front->next)
        {
            front = front->next;
            iter = iter->next;
        }
        
        iter->next = iter->next->next;
        
        return head;
    }
};