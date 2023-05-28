/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// If you just want to know whether it is a ring, then use one fast and one slow to deal with it, and the ring will be chased after all.
// Then this trick must have at least two numbers, if there is only one, directly RETURN FALSE
// But how long does it take to run before I know I should stop?
// The number of the nodes in the list is in the range [0, 104].
bool hasCycle(struct ListNode *head) {
    if(head == NULL) return false;
    if(head->next == NULL ) return false;
    
    struct ListNode *fast = head->next;
    struct ListNode *slow = head;
    int count = 0;
    
    while(fast!=slow)
    {
        if(fast->next == NULL) return false; 
        if(fast->next->next == NULL) return false;
        
        fast = fast->next->next;
        slow = slow->next;
        count++;
        
        if(count>10000) return false;
    }
    
    return true;
}