// only O(1) extra space complexity and O(n) runtime complexity?
// Then QSORT is paired with a circle to see where the break is.
// Whoever breaks will return
// If there is no break, add 1 to the final value

int cmpfuc(const void*a, const void *b)
{
    return *(int*) a - *(int*) b;
}

int missingNumber(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmpfuc);
    
    
    for(int i = 1;i<numsSize;i++)
    {
        if((nums[i]-nums[i-1])!=1) return nums[i]-1;
    }
    
    if(nums[numsSize-1]+1>numsSize)
    {
       return nums[0]-1; // Added for the example [1]
    }
    return nums[numsSize-1]+1;
}