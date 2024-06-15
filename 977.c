/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void *a,const void *b)
{
    return ( *(int*)a - *(int*)b);
}


int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    
    int *p = (int *)malloc(sizeof(int)*numsSize);
    memset(p,0u,sizeof(int)*numsSize);

    for(int i=0;i<numsSize;i++)
    {
        p[i]= (int)pow(nums[i],2);
        printf("%d ",p[i]);
    }

    qsort(p,numsSize,sizeof(int),compare);

    for(int i=0;i<numsSize;i++)
    {
       // p[i]= (int)pow(nums[i],2);
        printf("%d ",p[i]);
    }

    *returnSize=numsSize;

    return p;

}
