/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <math.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    
    int flag = 0;
    int newArray = 0;    
    
    // This question should have a bunch of constraints
    
    // Especially when converting to numbers, 
    // it may not even compare, so report digits.length <= 100 directly
    
    // Directly add 1 to jump up,  
    // if not enough, change to a new ARRAY at most, and then re-move the matrix
    
    digits[digitsSize-1] = digits[digitsSize-1] +1;
    
    for(int i = digitsSize-1 ; i>-1 ;i--)
    {
        if(flag==1)
        {
            digits[i] = digits[i]+1;           
            flag = 0;         
        }
        
        if(digits[i]==10)
        {
            flag = 1;
            digits[i]=digits[i]%10;
        }
        
        if((i==0)&&flag==1)
        {
            newArray = 1;
        }
    }
    
    if(newArray==0)
    {
        *returnSize = digitsSize;
        return digits;
    }
    
    *returnSize = digitsSize+1;
    
    int *num3;
    num3 = (int*)malloc(sizeof(int)*(digitsSize+1)); 
    for(int i = 0;i<digitsSize+1;i++)
    {
        if(i==0)
        {
            num3[i]=1;
        }
        else
        {
            num3[i]=digits[i-1];
        }
    }
    
    return num3;  
}