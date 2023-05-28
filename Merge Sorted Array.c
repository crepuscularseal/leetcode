// BUBBLE Worst Case：Ο(n2)、 QUICK O (n*logn) Both are ok, it is difficult to achieve O(m + n)
// nums2 add nums1，then sort.
// One method is to sort back from the back of nums1, because the back is empty, then fill in the larger ones on both sides
 void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    
    while(i>=0&&j>=0)
    {
        if(nums1[i]>nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    
    while(j>=0)
    {
        nums1[k]=nums2[j];
        k--;
        j--;
    }
    // nums1 is already there, no need to move it
}