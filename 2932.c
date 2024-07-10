#define MIN(a,b) (((a)<(b))?(a):(b))

int maximumStrongPairXor(int* nums, int numsSize) {
    
    int big=0;

    for(int i=0;i<numsSize;i++)
    {
        for(int j=i;j<numsSize;j++)
        {
                if(abs(nums[i]-nums[j])<=(MIN(nums[i],nums[j])))
                {
                    if(big<=(nums[i]^nums[j]))
                    {
                        big = nums[i]^nums[j];
                    }
                }
        }
    }

    return big;
}
