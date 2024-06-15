
bool backspaceCompare(char* s, char* t) {
    char *sp = (char *)malloc(sizeof(char)*(strlen(s)+1));
    char *tp = (char *)malloc(sizeof(char)*(strlen(t)+1));
    memset(sp,0,sizeof(char)*(strlen(s)+1));
    memset(tp,0,sizeof(char)*(strlen(t)+1));
int sp_top = 0;
int tp_top = 0;

    for(int i=0;i<strlen(s);i++)
    {
            if(s[i]!='#')
            {
                sp[sp_top++] = s[i];
            }
            else
            {
                if(sp_top!=0)
                {
                    sp_top--;
                    sp[sp_top]=NULL;
                }
            }
    }
        sp[sp_top] = '\0'; // Null terminate the string

    for(int i=0;i<strlen(t);i++)
    {
            if(t[i]!='#')
            {
                tp[tp_top++] = t[i];
            }
            else
            {
                if(tp_top!=0)
                {
                    tp_top--;
                    tp[tp_top]=NULL;
                }
            }
    }
        tp[tp_top] = '\0'; // Null terminate the string

    if(!strcmp(sp,tp)) {
        free(sp);
        free(tp);
    return true;
    }
    else{
          free(sp);
        free(tp);
    return false;
    }
}
