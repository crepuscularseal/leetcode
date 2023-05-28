int hammingDistance(int x, int y){
    
    int xo = x^y;//The truth table 0-1 and 1-0 will become 1, and the remaining 0-0 and 1-1 will be 0
    int dist = 0;
    
    while(xo>0)
    {
        if(xo&0x01 == 1) dist++;
        xo = xo>>1;
    }
    return dist;
}