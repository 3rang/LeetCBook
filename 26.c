int removeDuplicates(int* nums, int numsSize) {
   if(numsSize==1)
   {
    return 1;
   }
    int *p = (int *)calloc(202,sizeof(int));
    //memset(p,0,sizeof(int)*202);

     for(int i=0;i<numsSize;i++)
    {
          p[nums[i]+100]++;
    }

    int k=0;
     
  for(int i=0;i<202;i++)
    {
            if(p[i]){ 
          nums[k++]=(i-100);
            }
    }
    free(p);
    return k;
}
