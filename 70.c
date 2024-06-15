int climbStairs(int n) {
    
    int tmp[45]={0};
    int *p = malloc(sizeof(int)*45);
    memset(p,0,sizeof(int)*45);
      p[0]=1;
      p[1]=2;
    for(int i=2;i<n;i++)
    {
            p[i] = p[i-1]+p[i-2];
    }
    int ret = p[n-1];
    free(p);
    return ret;
}
