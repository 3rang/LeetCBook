int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    
    int *p = (int *)malloc(sizeof(int)*(numsSize+1));

    memset(p,0,sizeof(int)*(numsSize+1));

    for(int i=0;i<numsSize;i++)
    {
        p[nums[i]]++;
    }
    int count=0;
    for(int i=1;i<=numsSize;i++)
    {
          if(p[i]==0)
            {
                count++;
            }
    }

    int *q = (int *)malloc(sizeof(int)*count);

    for(int i=1,j=0;i<=numsSize;i++)
    {
          if(p[i]==0)
            {
                q[j++]=i;
            }
    }

    *returnSize=count;
    free(p);
    return q;


}
