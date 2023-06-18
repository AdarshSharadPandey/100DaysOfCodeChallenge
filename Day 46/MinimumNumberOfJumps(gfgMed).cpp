int jump(int arr[], int n, int curr)
{
    int steps = arr[curr], ans = 1, i = 1;
    if(curr+steps >= n-1)  return steps;
    for(i; i<=steps; i++)
        if(i+arr[curr+i] > ans+arr[curr+ans] && arr[curr+i] != 0)
            ans = i;
    return ans;
}

int minJumps(int arr[], int n)
{
    int index = 0, cnt = 0;
    while(index<n-1)
    {
        if(arr[index] == 0) return -1;
        index = index + jump(arr, n, index);        
        cnt++;
    }
    return cnt;
}