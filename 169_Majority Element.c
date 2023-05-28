// After QSORT, the intermediate value is taken, but the time complexity still needs logN, and it is difficult to achieve O(1)

int cmpfuc(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}

int majorityElement(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmpfuc);
    return nums[numsSize/2];
}

