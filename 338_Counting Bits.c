// The smallest bits are all those that have appeared before!
// Use the square of 2 as the cutting point, and the latter is the previous value + 1
// We only need to initialize the front value first, and the latter can be calculated from the front.

int* countBits(int n, int* returnSize){
    int *ans = (int*)malloc((n+1)*sizeof(int));
    *returnSize = n+1;
    if(n==0) 
    {
        ans[0] = 0;
        return ans;
    }
    if(n==1)
    {
        ans[0] = 0;
        ans[1] = 1;
        return ans;
    }

    ans[0] = 0;
    ans[1] = 1;
    for(int i = 1; pow(2, i) - 1 < n ;i++)  //Cutting breakpoints, splitting with 2^0, 2^1, 2^2, 2^3, 2^4...
    {
        int s = pow(2, i);
        for(int j = s;j<=n && j<pow(2, i+1);j++) //For between each breakpoint, note: to n or before pow(2, i+1)
        {            
            ans[j] = ans[j-s]+1; 
        }
    }
    return ans;
}