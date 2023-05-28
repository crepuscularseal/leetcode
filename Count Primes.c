int countPrimes(int n){
    
    if(n<2) return 0;    
    
    bool isprime[n];   
        
    for(int i = 2;i<n;i++)
    {
        isprime[i] = true;
    }
    
    for(int i=2;i*i<n;i++)
    {
        if(isprime[i]==true)
        {
            for(int j=i*i;j<n;(j=j+i))
            {
                isprime[j]=false;
            }
        }
    }
    
    int count = 0;
    for(int i = 2;i<n;i++)
    {
        if(isprime[i]==true) count++;
    }
    
    return count;
}