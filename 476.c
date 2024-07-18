int findComplement(int num) {
    int i;
    for(i=31;i>=0;i--)
    {
        if(num & (1u << i ))
        {
            break;
        }
    }

    for(i;i>=0;i--)
    {
        num = num ^ (1u << i);   
    }
    return num;
    
}
