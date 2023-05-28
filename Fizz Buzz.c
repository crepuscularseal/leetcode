/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    *returnSize = n;
    
    char** ans ;
    ans = (char**)malloc(n*sizeof(char*));
    
    
    for(int i = 1;i<=n;i++)
    {
        
        char* str = (char*)malloc(15*sizeof(char));
        if(i%3==0&&i%5==0)
        {            
            sprintf(str, "FizzBuzz");
        }
        else if(i%5==0)
        {
            sprintf(str, "Buzz");
        }
        else if(i%3==0)
        {
            sprintf(str, "Fizz");
        }
        else
        {
            sprintf(str, "%d", i);
        }
        ans[i-1] = str;
    }
    
    return ans;
}