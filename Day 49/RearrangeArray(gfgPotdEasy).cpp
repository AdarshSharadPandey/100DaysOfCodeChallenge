void arrange(long long arr[], int n) 
{
    long long A[n];
    for(int i=0;i<n;i++)
        A[i]=arr[arr[i]];
    for(int i=0;i<n;i++)
        arr[i]=A[i];
    
}