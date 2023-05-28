void rotate(int* nums, int numsSize, int k){
    int red = k%numsSize;
    int nelen = numsSize-red;
    
    int fak[2*numsSize];    
    
    for(int i = 0;i<numsSize;i++)
    {
        fak[i]=nums[i];
    }
    for(int i = numsSize;i<2*numsSize;i++)
    {
        fak[i]=nums[i-numsSize];
    }
    for(int i = nelen;i<nelen+numsSize;i++)
    {
        nums[i-nelen] = fak[i];
    }
    
}