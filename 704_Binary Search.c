int search(int* nums, int numsSize, int target){
    
    int max=numsSize-1;
    int min=0;
    int mid=(max+min)/2;

    while(min<=max)
    {
        mid=(max+min)/2;
        if(target>nums[mid])
        {
            min = mid+1;
        }
        else if(target<nums[mid])
        {
            max = mid-1;
        }
        else if(target==nums[mid])
        {
            return mid;
        }
    }
    return -1;
}