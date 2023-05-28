// Check if left and right symmetrical
// Then first cut off the non-26 letters
// All letters move forward, and remember where SIZE goes
// Then compare the left and right sides
bool isPalindrome(char * s){   
    
    int i = 0 ;
    int j = 0 ;
    while(s[i]!='\0')
    {
        if((((s[i]-'A')>=0 && (s[i]-'A')<26)||((s[i]-'a')<26 &&(s[i]-'a')>=0)) || ((s[i]-'0')<10 &&(s[i]-'0')>=0))
        {
            if((s[i]-'A')>=0 && (s[i]-'A')<26)
            {
                s[i] = s[i]+('a'-'A');
            }            
            s[j] = s[i];
            j++;
        }
        i++;
    }
    for(int k = 0;k<j;k++)
    {
        printf("%c",s[k]);
    }
    for(int k = 0;k<j/2;k++)
    {
        if(s[k]!=s[j-1-k]) return false;
    }
    return true;
}