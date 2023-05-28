/*
by its own nature to do
Bring in the system maximum and minimum values during initialization
Substitute their own node values during recursion
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValid(struct TreeNode* root, long mn, long mx) {
    if (!root) return  true ;
    if (root->val <= mn || root->val >= mx) return  false ;
    return isValid(root->left, mn, root->val) && isValid(root->right, root-> val, mx);
}

bool isValidBST(struct TreeNode* root){
   return isValid(root, LONG_MIN, LONG_MAX);
}