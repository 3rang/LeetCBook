/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    
    int *box = (int *)calloc(2,sizeof(int));
    *returnSize = 2;

    for(int i=31;i>=0;i--)
    {
        if(n&((unsigned int)1<<i))
        {
            if(i%2==0)
            {
            box[0]++;
            }
            else
            {
                box[1]++;
            }
        }
    }

    return box;
}
