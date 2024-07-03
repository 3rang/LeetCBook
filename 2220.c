int minBitFlips(int start, int goal) {
    
    int count=0;
    for(int i=31;i>=0;i--)
    {
        if((start&((unsigned int)1<<i))^(goal&((unsigned int)1<<i)))
        {
            count++;

        }
    }

return count;
}
