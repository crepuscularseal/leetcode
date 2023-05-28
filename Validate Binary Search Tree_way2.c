/*
recursive inorder traversal
Whenever a new node is traversed, it is compared with its previous node
Return false if not greater than the previous node
Returns true after all traversal is complete.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool inordercmp(struct TreeNode* root,struct TreeNode* prev)
{
    if(root==NULL) return true;
    bool res = inordercmp(root->left,prev);
    if(res==false) return false;
    if(prev!=NULL)
    {
        if(root->val<=prev->val) return false;
    }
    prev = root;
    // In fact, inoredr is very simple
    // 1. inorder(node->Llink);
    // 2. inorder(node->Rlink);
    // Here is the element that adds comparison and bool
    return inordercmp(root->right,prev);
}

bool isValidBST(struct TreeNode* root){
    struct TreeNode* prev = NULL;
    return inordercmp(root,prev); 
}