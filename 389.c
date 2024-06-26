char findTheDifference(char* s, char* t) {
    
    int s_frq[26]={0},i;
    
    for(i=0;i<strlen(s);i++)
    {
        s_frq[s[i]-'a']++;
    }

    
    for( i=0;i<strlen(t);i++)
    {
        s_frq[t[i]-'a']--;
    }

    for( i=0;i<26;i++)
    {
        if(s_frq[i]==-1){
        i+=97;
        break;
        }
    }


    return (char)i;
}
