int setBits(long long num) 
{
    int count = 0;
    while (num > 0)
    {
       num &= (num - 1);
       count++;
    }
    return count;
}
long long countBits(long long N) 
{
    long long count=0;
    for(long i=1;i<=N;i++)
        count+=setBits(i);
    return count;
}