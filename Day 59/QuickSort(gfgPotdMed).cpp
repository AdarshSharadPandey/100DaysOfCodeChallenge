void quickSort(int arr[], int low, int high)
{
    if (low < high) 
    {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[low], cnt = 0;
    for (int i = low + 1; i <= high; i++) 
        if (arr[i] <= pivot) cnt++;
    int pivotIndex = low + cnt;
    swap(arr[pivotIndex], arr[low]);
    int i=low,j=high;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}