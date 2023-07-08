bool findTriplets(int arr[], int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int start=i+1, end=n-1;
        while(start<end)
        {
            if(arr[i]+arr[start]+arr[end]==0) return 1;
            else if(arr[i]+arr[start]+arr[end]>0) end--;
            else start++;
        }
    }
    return 0;
}