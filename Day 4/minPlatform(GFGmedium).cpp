int findPlatform(int arr[], int dep[], int n)
{
	sort(arr, arr+n);
    sort(dep, dep+n);
    int curr=1,result=1,i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j]) { curr++; i++; }
        else if(arr[i]>dep[j]) { curr--; j++; }
        result=max(result,curr);
    }
    return result;
}