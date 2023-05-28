int reverse(int x){
    int y;
    int last_y = 0;
    
    while(x!=0)
    {
        y = x%10;
        
        if(last_y>(pow(2,31) - 1)/10) return 0;  //After inversion, confirm the upper limit before multiplying
        if(last_y<(-1*pow(2,31))/10) return 0;   //After inversion, confirm the lower limit before multiplying
        
        // Even negative numbers can be used, 
        // because taking -321 as an example, the following is also -3&-2, so there is no difference in adding the same direction
        last_y = 10*last_y+y;
        x /= 10;
    }
    
    return last_y;

}