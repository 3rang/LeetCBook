int missingNumber(int* nums, int numsSize) {
    
    int *p = (int *)malloc(sizeof(int)*(numsSize+1));
    memset(p,0,sizeof(int)*(numsSize+1));
    for(int i=0;i<numsSize;i++)
    {
             p[nums[i]]++;
    }
     for(int i=0;i<=numsSize;i++)
    {
           if(p[i]==0)
           {    
               return i;
           }
    }
    free(p);  
    return numsSize;
}
