int missingNumber(int arr[], int n) 
{ 
    sort(arr,arr+n);
    int missing=1, i=0;
    while(arr[i]<=0) i++;
    while(arr[i]==missing)
    {
        while(arr[i+1]==arr[i]) i++;
        i++;
        missing++;
    }
    return missing;
} 