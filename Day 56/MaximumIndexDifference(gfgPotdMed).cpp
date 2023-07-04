int maxIndexDiff(int arr[], int n) 
{
    int ans=0,i=0,j=0;;
    int temp[n];
    temp[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--) temp[i]=max(temp[i+1],arr[i]);
    while(i<n && j<n)
    {
        if(arr[i]<=temp[j]) ans=max(ans,j-i),j++;
        else i++;
    }
    return ans;
}