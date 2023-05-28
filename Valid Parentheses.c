


bool isValid(char * s){
    int Ssize = strlen(s);
    char stack[Ssize]; 
    
    int top = 0;
    
    for(int i =0;i<Ssize;i++)
    {        
        if((top > 0) && ((stack[top-1]=='(' && s[i]==')')||(stack[top-1]=='[' && s[i]==']')||(stack[top-1]=='{' && s[i]=='}')))
        {
            top--;
        }
        else
        {
            stack[top] = s[i];
            top++;
        }

        if(top < 0 ) return false;
    }
    if(top>0) return false;

    return true;
}