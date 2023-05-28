int rob(int* nums, int numsSize){
   
    if(numsSize == 0) return 0;
    if(numsSize == 1) return nums[0];
    if(numsSize == 2) 
    {
        if(nums[0]>nums[1]) return nums[0];
        return nums[1];
    }
    
    int rob[numsSize];    
    rob[0] = nums[0];    
    if(nums[0]>nums[1])
    {
        rob[1] = nums[0];  
        // Let the following for be reasonable whether it is on the first departure or the second departure
    }
    else
    {
        rob[1] = nums[1];          
    }
    
    for(int i=2;i<numsSize;i++)
    {
        if(rob[i-1]>rob[i-2]+nums[i])
        {
            rob[i] = rob[i-1];
        }
        else
        {
            rob[i] = rob[i-2]+nums[i];
        }
    }  
    return rob[numsSize-1];
}