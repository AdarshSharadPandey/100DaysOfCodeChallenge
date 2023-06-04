int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3)
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i=0 ; i<N1 ; i++) sum1 += S1[i];
    for(int i=0 ; i<N2 ; i++) sum2 += S2[i];
    for(int i=0 ; i<N3 ; i++) sum3 += S3[i];
    if(sum1==sum2 && sum2==sum3)
    return sum1;
    int i=0, j=0,k=0;
    while(i<N1 && j<N2 && k<N3)
    {
        if(sum1 == sum2 && sum2 == sum3) return sum1;
        sum1 -= S1[i];
        while(sum1 < sum2)
        {
            sum2 -= S2[j];
            j++;
        }
        while(sum1 < sum3)
        {
            sum3 -= S3[k];
            k++;
        }
        i++;
    }
    return 0;
}