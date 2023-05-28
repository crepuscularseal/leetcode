/*
n = 2
1. 1 step + 1 step
2. 2 steps

n = 3
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

4 = 1 + 1 + 1 + 1
4 = 2 + 1 + 1 
4 = 1 + 2 + 1 
4 = 1 + 1 + 2
4 = 2 + 2

*/

//Topics are limited to a maximum of 45 steps

int climbStairs(int n){
    
    int clm[46] = {0};
    
    clm[0] = 0;
    clm[1] = 1;
    clm[2] = 2;
    
    if(n>2)
    {
        for(int i = 3;i<=45;i++)
        {
            clm[i] = clm[i-2]+clm[i-1];
            if(i==n)
            {
                return clm[i];
            }
        }
    }

    return clm[n];
}

