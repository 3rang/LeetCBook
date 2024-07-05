int compare(const void *a, const void *b) {
    long long intA = *(const int*)a;
    long long intB = *(const int*)b;

    if (intA < intB) return -1;
    if (intA > intB) return 1;
    return 0;
}

int singleNumber(int* nums, int numsSize) {
    
  

    qsort(nums,numsSize,sizeof(int),compare);


    int final=(int)nums[0];
    if(numsSize>3){
    for(int i=0;i<numsSize;)
    {  
        final=nums[i];
        if(i+3 < numsSize){
                if((nums[i]==nums[i+1]) && (nums[i]==nums[i+2]))
                {
                  //  printf("x %d ",nums[i]);
                    i+=3;
                }
                else
                {
                    i=numsSize;
                    break;
                }
        }
        else
        {
             i=numsSize;
             break;
        }
    }
    }
    return final;
}
