int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

        int loop,in=0;
        int *p=malloc(sizeof(int)*2);
            for(loop=0;loop<numsSize;loop++)
            {
                for(in=loop+1;in<numsSize;in++)
                {
                        
                          if((nums[loop]+nums[in]) == target)
                        {
                              p[0]=loop;
                               p[1]=in;
                               *returnSize=2;
                              break;
                        }
                      
                }
            }
return p;
}
