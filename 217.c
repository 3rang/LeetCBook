int compare(int *p,int *q)
{
    return (*(int*)p - *(int*)q);
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=1;i<numsSize;i++)
    {
    if(nums[i-1]==nums[i])
        return true;
    }
    return false;
    
}
