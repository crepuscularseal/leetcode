// Let's see who is bigger than the big one,
// If you are a big one, feel free, as if the question is if needle is part of or not
// There will be two layers of for for small comparisons
int strStr(char * haystack, char * needle){
    
    int k = 0;
    int haystackSize = 0;
    int needleSize = 0;
    int ans;
    
    while(haystack[k]!='\0') k++;
    haystackSize = k;   
    k = 0;
    
    while(needle[k]!='\0') k++;
    needleSize = k;   
    k = 0;
    
    if(haystackSize==needleSize)
    {
        for(int j = 0; j<needleSize;j++)
        {
            if(haystack[j] != needle[j]) 
            {
                return -1;
            }
        }
        return 0;
    }
    
    
    for(int i = 0;i<haystackSize-needleSize+1;i++)
    {        
        if(haystack[i] == needle[0])
        {
            k=0;
            for(int j = 0; j<needleSize;j++)
            {                
                if(haystack[i+j] != needle[j]) 
                {
                    break;
                }
                else
                {
                    k++;
                }
            }
            if(k==needleSize)
            {
                
                return i;
            }
        }
    }
    
    return -1;
}