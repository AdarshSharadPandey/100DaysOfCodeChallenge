int count(int arr[], int n, int x) 
{
    int  high=n-1,low=0,cnt=0;
    while(high>=low)
    {
        int mid=(low +high)/2;
        if(arr[mid]==x)
        {
            int i=mid-1;
            int j=mid+1;
            cnt++;
            while(arr[i]==x || arr[j]==x)
            {
                if(arr[i]==x && arr[j]==x)
                {
                    cnt+=2;
                    i--;
                    j++;
                }
                else if(arr[i]==x)
                {
                    cnt++;
                    i--;
                }
                else if(arr[j]==x)
                {
                    cnt++;
                    j++;
                }
            }
            break;
        }
        else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return cnt;
}