// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


int firstBadVersion(int n) {
    long min = 1;
    long max = n;
    int mid;
    
    while(max>min)
    {
        mid = (max+min)/2;
        if(isBadVersion(mid)==true)
        {
            max = mid;
            
        }
        else
        {
            min = mid+1;//因為int 的除2 會無條件捨去
        }
    }
    return max;
    
}