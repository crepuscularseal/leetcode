
char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0) return "";
    if(strsSize==1) return strs[0];
    
    int colMin = strlen(strs[0]);
    for(int i = 1;i<strsSize;i++)
    {
        if(colMin>strlen(strs[i]))
        {
            colMin = strlen(strs[i]);
        }
    }
    
    if(colMin == 0) return "";
    
    char *ans;
    int comcol;
    ans = (char*)malloc(201*sizeof(char));
    
    for(int j = 0;j<colMin;j++)
    {
        int col_err = 0;
        for(int i = 0;i<strsSize-1;i++)
        {
            if((strs[i+1][j]-strs[i][j])<0)
            {
                col_err = col_err-(strs[i+1][j]-strs[i][j]);
                // ["c","acc","ccc"]
            }
            else
            {
                col_err = col_err+(strs[i+1][j]-strs[i][j]);
            }
            
        }
        if(col_err!=0) 
        {
            comcol = j;
            break;
        }
    }
    for(int i =0;i<comcol+1;i++)
    {
       ans[i] = strs[0][i]; 
    }
    ans[comcol] = '\0';
    return ans;
}