int* countBits(int n, int* returnSize) {
    
    int j=n+1;

    int *p = (int *)malloc(sizeof(int)*(n+1));
    memset(p,0,(sizeof(int)*(n+1)));
    p[0]=0;
    while(j)
    {   
        for(int i=31;i>=0;i--){
        if(((j-1)&(1u<<i))) {   
            p[j-1]+=1;
        }
        }
        j--;
    }
    *returnSize=(n+1);
return p;
}
