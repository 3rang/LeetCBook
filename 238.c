/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int prod = 1;
    int zero=0;
    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    memset(ans,0,sizeof(int)*numsSize);
    for(int i = 0; i < numsSize; i++) {
        if(nums[i]==0)
        {
            zero++;
            ans[i]=1;
        }
  }

  if(zero >=2)
  { memset(ans,0,sizeof(int)*numsSize);
    return ans;
  }
    for(int i = 0; (i < numsSize); i++) {
            if(ans[i]==0)
            prod*=nums[i];
    }
    
    for(int i = 0; (i < numsSize); i++) {
            if(ans[i]==1)
            ans[i]=prod;
            if(ans[i]==0 && !zero)
            {
                ans[i]=prod/nums[i];
            }
    }

    return ans;
}
