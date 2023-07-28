void heapify(int arr[], int n, int i)  
{
    int left = 2*i+1, right = 2*i+2, lar = i;
    if(left<n && arr[left]>arr[lar])
        lar = left;
    if(right <n && arr[right]>arr[lar])
        lar = right;
    if(lar!=i)
    {
        swap(arr,i,lar);
        heapify(arr,n,lar);
    }
}
void buildHeap(int arr[], int n)  
{ 
    for(int i=(n-2)/2; i>=0;i--)
        heapify(arr,n,i);
}
void swap(int arr[], int i, int j)
{
    //code here
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}
void heapSort(int arr[], int n)
{
    buildHeap(arr,n);
    for(int i =n-1; i>=1; i--)
    {
        swap(arr,0,i);
        heapify(arr,i,0);
    }
}