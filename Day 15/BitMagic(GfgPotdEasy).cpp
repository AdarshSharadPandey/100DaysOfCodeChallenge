int bitMagic(int n, vector<int> &arr) 
{
    int cnt = 0;
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]!=arr[j]) cnt++;
        i++;
        j--;
    }
    if(cnt&1) return ((cnt/2)+1);
    return cnt/2;
}