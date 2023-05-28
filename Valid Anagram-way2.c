bool isAnagram(char * s, char * t){
    int sNum[26] = {0}; 
    int tNum[26] = {0}; 
    
    int i = 0;
    while(s[i]!='\0')
    {
        sNum[s[i]-'a'] += 1 ; 
        i++;        
    }
    
    i = 0;
    while(t[i]!='\0')
    {
        tNum[t[i]-'a'] += 1 ; 
        i++;          
    }

    for(i = 0;i<26;i++)
    {
        if(sNum[i]!=tNum[i]) return false;
    }
    return true;
}