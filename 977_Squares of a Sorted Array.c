/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmpfuc(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize=numsSize;
    for(int i = 0;i<numsSize;i++)
    {
        nums[i] = pow(nums[i],2);//2147483647 is limt
    }
    qsort(nums,numsSize,sizeof(int),cmpfuc);
    return nums;
}