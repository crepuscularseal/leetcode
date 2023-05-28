 struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };

bool isSameTree2(struct TreeNode* p, struct TreeNode* q){
    if(p==NULL && q!=NULL) return false;
    if(p!=NULL && q==NULL) return false;
    if(p==NULL && q==NULL) return true;
    if(p->val==q->val)
    {
       return isSameTree2(p->left,q->left)&&isSameTree2(p->right,q->right);
    }
    else
    {
        return false;
    }     
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q){    
    return isSameTree2(p,q);
}



/*
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(!p && !q)    return true;
    if(!p || !q)    return false;
    return (p->val == q->val && isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
}

*/