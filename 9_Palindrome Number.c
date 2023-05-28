// After reversing the number, it should be the same as the original

bool isPalindrome(int x){
    if(x<0)
    {
        return false;
    }
    int temp,rem=0;
    long int rev=0;
    temp=x;
    while(temp>0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==x)
        return true;
    return false;
}