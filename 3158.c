int duplicateNumbersXOR(int* nums, int numsSize) {
    
    int box[50]={0};
    int xOR=0;
    for(int i=0;i<numsSize;i++)
    {
        box[nums[i]-1]++;
    }

     for(int i=0;i<50;i++)
    {
        if(box[i]==2){
        xOR^=(i+1);
        }
    }

    return xOR;
}
