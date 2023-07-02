int setSetBit(int x, int y, int l, int r)
{
    for(int i=l; i<=r; i++)
    {
        if(y&(1<<(i-1)))
        {
            int z=(1<<(i-1));
            x = x | z;
        }
    }
    return x;
}