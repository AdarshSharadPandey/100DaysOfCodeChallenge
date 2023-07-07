void merge(long long arr1[], long long arr2[], int n, int m) 
{ 
    int i=n-1,j=0;
    while(arr1[i] > arr2[j] && i>=0 && j<=m-1)
    {
        swap(arr1[i],arr2[j]);
        j++;
        i--;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
} 