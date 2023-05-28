/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* convert(int* nums,int min,int max)
{
    if(min>max)
    {
        return NULL;
    }
    else
    {
        int mid = (max+min)/2;
        
        struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        node->left = NULL;
        node->right = NULL;
        node->val = nums[mid];
        node->left = convert(nums,min,mid-1);//find  min value as left node，by ca，by call function as stack 
        node->right = convert(nums,mid+1,max);
        return node;
    }
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    
    return convert(nums,0,numsSize-1);
}

