/*
1
1 1 
1 2 1 
1 3 3 1
1 4 6 4 1

That appears to be a second-order matrix,

nums[i][j]=nums[i-1][j]+nums[i-1][j-1]

*/

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int **ans;
    ans = (int**)malloc(numRows*sizeof(int*));
    
    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(numRows*sizeof(int));
    
    for(int i=0;i<numRows;i++)
    {
        (*returnColumnSizes)[i] = i+1;
        ans[i] = (int*)malloc((i+1)*sizeof(int));
        for(int j = 0;j<(i+1);j++)
        {
            if(j==0 || j==i)
            {
                ans[i][j] = 1;
            }
            else 
            {
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }            
        }
    }
    return ans;
}