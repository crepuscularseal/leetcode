/*
If I add to item i-1, the cumulative value is smaller than i.
Should I simply replace the cumulative value with the current value directly, so that I can get higher benefits.
*/
int maxSubArray(int* nums, int numsSize){
    if(numsSize==1) return nums[0];
    
    int temp = 0;
    int maxprofit = nums[0]; // 設成0無法面對負值
    
    for(int i = 0;i<numsSize;i++)
    {
        temp = temp+nums[i];
        if(temp<nums[i] ) temp = nums[i];
        if(maxprofit<temp) maxprofit = temp;
    }    
    return maxprofit;
}