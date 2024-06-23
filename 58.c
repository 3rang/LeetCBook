int lengthOfLastWord(char* s) {
int tmp=0;
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]!=' ') {  
            tmp++;
    }
    else
    {
     if(tmp)
       {
       break;
       }
    }
    }
    return tmp;
}
