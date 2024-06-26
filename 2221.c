int triangularSum(int* nums, int numsSize) {
  //  int tmp=0;
    while(numsSize)
    {
        for(int i=0;i<numsSize-1;i++)
        {
            nums[i]+=nums[i+1];
            if(nums[i]>=10)
            {
                nums[i]%=10;
            }
        }
        numsSize--;
    }
    return nums[0];
}
