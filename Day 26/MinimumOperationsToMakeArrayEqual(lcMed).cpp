int minOperations(int n) 
{
    vector<int>arr(n);
    for(int i=0;i<n;i++)
       arr[i]=(2*i)+1;
    int ans=0, median=0;
    if(n%2==0)
    {
        int x=arr[n/2], y=arr[n/2-1];
        median=(x+y)/2;
    }
    else if(n%2!=0) median=arr[n/2];
    int i=0;
    while(i<n/2)
    {
        int x=arr[i];
        ans+= abs(x-median);
        i++;
    }
   return ans;
}