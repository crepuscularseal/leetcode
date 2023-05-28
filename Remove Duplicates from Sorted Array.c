int removeDuplicates(int* nums, int numsSize){
    
    if(numsSize==0) return 0;
    if(numsSize==1) return 1;
    
    int NewSize = 0;
    for(int i=0; i<numsSize-1;i++)
    {
        if(nums[NewSize] < nums[i+1] )
        {
            NewSize++;
            nums[NewSize] = nums[i+1];
        }        
    }
    NewSize++;//乾~這個要從指針換回SIZE!!
    return NewSize;
}