#include <stdlib.h>

char compfc(const void *a,const void *b)
{
    return (*(char*)a-*(char*)b);
}

bool isAnagram(char * s, char * t){
    int sSize = 0;
    int tSize = 0;
    int i = 0;
    
    while(s[i]!='\0') i++;
    sSize = i;
    i=0;

    while(t[i]!='\0') i++;
    tSize = i;
    i=0; 
    
    if(sSize!=tSize) return 0;
    
    qsort(s,sSize,sizeof(char),compfc);
    qsort(t,tSize,sizeof(char),compfc);
    for(i=0;i<sSize;i++)
    {
        if(s[i]!=t[i]) return false;
    }
    
    return true;

}