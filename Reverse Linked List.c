/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;
    
    while(curr!=NULL)
    {   
        next = curr->next; // remember where the next one is     
        curr->next = prev; // change direction
        prev = curr;       // turn the present into the past
        curr = next;       //   make the next one now
    }
    return prev;
}