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

struct TreeNode* LCA(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root == NULL) return NULL;
    if(root->val < p->val)
    {
        // If the current value of the common root < the minimum value
        // Then you can skip to the left and go directly to the right
        return LCA(root->right, p, q)
    }
    else if(root->val > q->val)
    {
        // If the current value of the common root > min
        // Then you can skip to the right and go directly to the left
        return LCA(root->left, p, q)
    }
    else
    {
        return root; 
    }
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    // Let the node of P be the node smaller than q
    // It is the MIN and MAX boundaries under BST
    if(p->val < q->val)
    {
        return LCA(root,p,q);
    }
    else
    {
         return LCA(root,q,p);
    }
}