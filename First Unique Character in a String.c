int firstUniqChar(char * s){
    int fast=0;
    int slow=0;
    
    while(s[slow]!='\0')
    {
        fast = 0;
        while(s[fast]!='\0')
        {            
            if(s[slow] == s[fast]&&fast!=slow)
            {
                break;
            }
            fast++;
        }
        if(s[fast]=='\0')
        {
            return slow;
        }
        slow++;  
    } 
    return -1;
}