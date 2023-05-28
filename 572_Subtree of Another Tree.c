/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };

bool isSameTree(struct TreeNode* p, struct TreeNode* q){    
    if(!p && !q)    return true;
    if(!p || !q)    return false;
    return (p->val == q->val && isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot){
    if(root==NULL) return false;
    if(isSameTree(root,subRoot)==true) return true;
    return (isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot));
}