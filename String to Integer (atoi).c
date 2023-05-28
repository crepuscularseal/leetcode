int myAtoi(char * s){
    int signflag = 1; 
    int ans = 0;
    int i = 0;
    int j = 0;
    bool eff = false;  
    bool lasteff = false;  
    int flag = 0;
    
    while(s[i]!='\0')
    {
        if(((s[i]-'0')<10 &&(s[i]-'0')>=0)||s[i]==45)
        {            
            eff = true;
            if(s[i]==45)
            {
                signflag = -1;               
            }
            else            
            {
                if(ans>(pow(2,31) - 1)/10) return 0;
                if(ans<(-1*pow(2,31))/10) return 0;
                printf("%d->",(s[i]-'0'));
                ans = ans*10+(s[i]-'0');
            }
        }
        if(lasteff^eff)
        {
            flag++;
        }
        if(flag==2)
        {
            //return ans;
        }
        i++;
    }
    return signflag*ans;
}