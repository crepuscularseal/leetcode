// Then I will walk all round first to know how long it takes
// Walk again to the middle, turning the first half while walking
bool isPalindrome(struct ListNode* head){
    
    int listSize = 0;
    int midpoint = 0;
    
    struct ListNode* ptr = head;
    
    while(ptr!=NULL)
    {
        ptr = ptr->next;
        listSize++;
    }
    
    if(listSize==1) return true;

    midpoint = listSize/2; 
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;   
    struct ListNode* left = NULL;
    struct ListNode* right = NULL;       
    
    for(int i = 0; i<midpoint;i++)
    {
        printf("%d->",i);
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;        
    }
    
    if(listSize%2)
    {
        // odd number
        left = prev;
        right = curr->next;
    }
    else
    {
        // even number
        left = prev;
        right = curr;
    }
    
    if(right->val!=left->val) return false;
    
    while(right!=NULL)
    {
        if(right->val!=left->val) return false;
        right = right->next;
        left = left->next;
    }    
    
    return true;
}