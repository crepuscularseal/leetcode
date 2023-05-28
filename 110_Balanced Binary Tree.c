/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int FindHeight(struct TreeNode* curr)
{
    if(curr==NULL) return 0;
    return fmax(FindHeight(curr->left),FindHeight(curr->right))+1;  
}

bool isBalanced(struct TreeNode* root){
    if(root==NULL) return true;
    if(abs(FindHeight(root->left) - FindHeight(root->right)) > 1) return false;
    return isBalanced(root->left)&&isBalanced(root->right);  // <----------If it matches, continue to recurse with them as the root of the tree
}