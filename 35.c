int searchInsert(int* nums, int numsSize, int target) {

    if(nums[0]>target)
    {
           return 0;
    }
    int tmp=0,i;
    for(i=0; i<numsSize ;i++)
    {
        if(target < nums[i] && !tmp)
        {
            tmp = i;
        }
        if(nums[i]==target){
            return i;
        }
    }
    if(tmp)
    {
        return tmp;
    }
 return i;   
}
