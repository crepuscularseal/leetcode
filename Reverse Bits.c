uint32_t reverseBits(uint32_t n) {
    
    uint32_t ans = 0 ;
    
    if(n&0x01 == 1) ans = 1; //the initial value
    
    for(int i = 0;i<31;i++)
    {
        n=n>>1;
        ans=ans<<1;
        if(n&0x01 == 1) ans = ans+1; //move first to add
    }
    return ans;
}