// Note that it cannot be sorted because "maintain the relative order of non-zero elements".
// Then when you see a non-zero, swap it forward, 
// Two pointers, and then add all the rest to 0

void moveZeroes(int* nums, int numsSize){
    
    int slow = 0;
    
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
           nums[slow] = nums[i];
           slow++;
        }
    }
    for( int i = slow;i<numsSize;i++)
    {
        nums[i] = 0;
    }
}