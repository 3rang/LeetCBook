bool isAnagram(char* s, char* t) {
    int *s_f=(int *)calloc(26,sizeof(int));

    for(int i=0;i<strlen(s);i++)
    {
        s_f[s[i]-'a']++;
    }

    for(int i=0;i<strlen(t);i++)
    {
        s_f[t[i]-'a']--;
    }

    for(int i=0;i<26;i++)
    {
        if(s_f[i]!=0)
         {
            free(s_f);
            return false;
         }
    }

    
    free(s_f);
       
    return true;

}
