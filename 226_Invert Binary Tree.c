/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// The intuition is BFS (then this side should be QUEUE, ARRAY has rear and front), plus two subtrees SWAP (requires TEMP)
// It may be simpler to use DFS recursively with SWAP


struct TreeNode* invertTree(struct TreeNode* root){
    if((root==NULL)||(root->left==NULL && root->right ==NULL))
    {
        return root;
    }

    struct TreeNode* curr;
    curr = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(curr);
    return root;
}