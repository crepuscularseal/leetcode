/*Layer order traversal is to layer the binary tree, and then traverse each layer from left to right*/


#define MAXMUN 10000

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
       
    int **ans = (int**)malloc(sizeof(int*)*MAXMUN); // malloc array of int*
    *returnColumnSizes = (int*)malloc(sizeof(int)*MAXMUN);// malloc array of int
    
    struct TreeNode* Queue[MAXMUN] = {0}; 
    int rear = -1;
    int front = -1;
        
    rear++;     //enQ
    Queue[rear] = root;
    int levelSize = 0;
    int level = 0;
    
    while(rear!=front)// QUEUE is not finish
    {
        levelSize = rear- front;
        ans[level] = (int*)malloc(sizeof(int)*levelSize);
        (*returnColumnSizes)[level] = levelSize; //<<----------------2D array
        
        for(int i = 0;i<levelSize;i++)
        {
            front++; //deQ
            
            struct TreeNode *temp = Queue[front]; //Take it out and see who comes in
            
            if(temp->left!=NULL)
            {
                rear++;
                Queue[rear] = temp->left;
            }
            
            if(temp->right!=NULL)
            {
                rear++;
                Queue[rear]=temp->right;                
            }
            ans[level][i] = temp->val;
        }
        level++;
    }
    *returnSize =level;
    return ans;
}