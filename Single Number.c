#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int singleNumber(int* nums, int numsSize){
    if(numsSize == 1 )
    {
        return nums[0];
    }
    qsort(nums,numsSize,sizeof(int),cmpfunc);
    
    int i=0;
    while(i<numsSize-1)
    {
        if(nums[i]==nums[i+1])
        {
            i = i+2;  
            // Because it must be an odd number of arrays, I have no problem with this group, so I must add 2. 
            
        }
        else
        {
            return nums[i];
        }
    }
    return nums[i];
}