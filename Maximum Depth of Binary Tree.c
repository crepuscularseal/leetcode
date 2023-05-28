/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <math.h>


int maxDepth(struct TreeNode* root){
    if(root==NULL) return 0;
    int ans;
    ans = fmax(maxDepth(root->left),maxDepth(root->right))+1; //每比完一層就要加1
    return ans;
}