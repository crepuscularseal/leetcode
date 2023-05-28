// Deepest left + deepest right on the topmost root node
// DFS algorithm, add each side of the depth once
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// This method passes the case of 100/104,
// But is there a possibility to get a super unbalanced tree,

int depth(struct TreeNode* root)
{
    if(root == NULL) return 0;
    return fmax(depth(root->left),depth(root->right))+1;
} 

int diameterOfBinaryTree(struct TreeNode* root){
    return depth(root->left)+depth(root->right);
}