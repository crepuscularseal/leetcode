// Prepare two 26-cell arrays, and then read the two strings separately. After reading, compare the two arrays

bool canConstruct(char * ransomNote, char * magazine){
    int rnote[26]={0};
    int maga[26]={0};
    int i = 0 ;
    while(ransomNote[i]!='\0')
    {
        rnote[ransomNote[i]-'a']++;
        i++;
    }
    i = 0 ;
    while(magazine[i]!='\0')
    {
        maga[magazine[i]-'a']++;
        i++;
    }

    for(i=0;i<26;i++)
    {
        if(rnote[i]>maga[i]) return false; 
        // return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
        // So rnote cannot be smaller than maga
    }
    return true;
}