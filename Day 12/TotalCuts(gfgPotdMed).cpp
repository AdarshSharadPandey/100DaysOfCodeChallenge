int totalCuts(int N,int K,vector<int> &A)
{
    vector<int>right(N),left(N);
    left[0]=A[0],right[N-1]=A[N-1];
    for(int i=1;i<N;i++)
    {
        left[i]=max(A[i],left[i-1]);
        right[N-i-1]=min(A[N-i-1],right[N-i]);
    }
    int ans=0;
    for(int i=1;i<N;i++)
        if(left[i-1]+right[i]>=K) ans++;
    return ans;
}