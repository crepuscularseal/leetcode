/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// First confirm whether the root is empty
// Take the left and right subtrees and throw them into the recursive check
// Because other things need to be checked before, they cannot be returned together
// So set up another function and use it recursively

bool isMirror(struct TreeNode* left,struct TreeNode* right){
    
    if(left==NULL && right==NULL) return true;
    if(left==NULL || right==NULL) return false;     
    if(left->val != right->val ) return false;;
    
    return (isMirror(left->left,right->right)&&isMirror(left->right,right->left));    // This is true symmetry
}

bool isSymmetric(struct TreeNode* root){
    if(root==NULL) return true;
    return isMirror(root->left,root->right);
}