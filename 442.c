/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    
    int *base = (int *)calloc(100000,sizeof(int));
    
    int *tmp = (int *)calloc(numsSize,sizeof(int));

    int k=0;

    for(int i=0;i<numsSize;i++)
    {  
        if(base[nums[i]])
        {
            tmp[k++] = nums[i];        
        }
        base[nums[i]] = true;
    }
    
    int *p = (int *)calloc(k,sizeof(int));
    
    for(int i=0;i<k;i++)
    {   
        p[i]=tmp[i];
    }

    *returnSize=k;

    free(tmp);
    free(base);
    return p;
}
