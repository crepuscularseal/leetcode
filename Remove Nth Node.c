/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    if(head->next==NULL) return NULL;
    
    for(int i=0;i<n;i++)
    {
        fast = fast->next;        
    }
    
    // fast go first, pull out the distance from slow
    // fast is outside the n distance, that is, there are n-1 nodes in the middle,
    // This ensures the integrity of fast to the last cell
    
    if(fast==NULL) return head->next;
    
    while(fast->next!=NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next =slow->next->next; 
    
    return head;
}