int caller(char c)
{
    switch (c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int romanToInt(char * s){
    
    int sum = 0;
    int len = strlen(s);
    
    for(int i = 0;i<len;i++)
    {
        if(caller(s[i])<caller(s[i+1]))
        {
            // The last one is '\0'
            // Entering the caller will only jump to 0
            sum = sum-caller(s[i]);
        }
        else
        {
            sum = sum+caller(s[i]);
        }
    }
    return sum;
}