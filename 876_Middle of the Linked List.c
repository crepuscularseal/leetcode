/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // fast one touch the bottom and slow one take the answer
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fast=head;
    struct ListNode* slow=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}