/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    qsort(nums1,nums1Size,sizeof(int),cmpfunc);
    qsort(nums2,nums2Size,sizeof(int),cmpfunc);
    
    int i = 0;
    int j = 0;
    int k = 0;
    int *num3;
    num3 = (int*)malloc(sizeof(int)*1000); 
    //First assume that it is so large, 

    while(i<nums1Size&&j<nums2Size)
    {
        if(nums1[i] == nums2[j])
        {
            num3[k]= nums1[i];
            k++;
            i++;
            j++;
        }
        else
        {
            if(nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    
    *returnSize = k;  //This line cannot be executed in VS CODE yet
    return num3;
}