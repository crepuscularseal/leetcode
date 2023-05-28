bool backspaceCompare(char * s, char * t){
    char arr1[201] = {'\0'};
    char arr2[201] = {'\0'};
    int top1=-1;
    int top2=-1;

    for(int i = 0; s[i] != '\0';i++)
    {
        if( s[i]=='#')
        {
            if(top1>-1) top1--;
        }
        else
        {
            top1++;
            arr1[top1] = s[i];
        }        
    }

    for(int i = 0;t[i] != '\0';i++)
    {
        if(t[i]=='#')
        {
            if(top2>-1) top2--;
        }
        else
        {
            top2++;
            arr2[top2] = t[i];
        }        
    }

    if(top1!=top2) return false;
    
    for(int i = 0;i<=top1;i++)
    {
        if(arr1[i]!=arr2[i]) return false;
    }
    
    return true;
}