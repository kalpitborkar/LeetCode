// https://leetcode.com/problems/reorder-list

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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;
        
        ListNode *slow = head, *fast = head, *l1 = head, *prev = NULL;
        
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prev->next = NULL;
        ListNode *l2 = reverse(slow);
        merge(l1, l2);
    }
    
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev = NULL, *curr = head, *next = NULL;
        
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    void merge(ListNode *head1, ListNode *head2)
    {
        ListNode *next = NULL;
        
        while(head2)
        {
            next = head1->next;
            head1->next = head2;
            head1 = head2;
            head2 = next;
        }
    }
};