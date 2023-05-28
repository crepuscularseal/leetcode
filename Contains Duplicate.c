// It seems that you need to sort first, then compare two pointers, QSORT C built-in
// When there is a group of the same, return true, and then as long as someone is 0,
// the back minus the front, or the back is equal to the front
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    for(int i = 0; i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1]) return true;
    }
    return false;
}