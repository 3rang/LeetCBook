int compare(const void *a,const void *b)
{
    return ( *(int*)a - *(int*)b);
}

int singleNumber(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0,j=1;j<numsSize;i+=2,j+=2)
    {
        if(nums[i] != nums[j] )
        {
            return nums[i];
            break;
        }
    }
return nums[numsSize-1];
    
}
