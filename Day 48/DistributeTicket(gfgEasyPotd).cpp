int distributeTicket(int N, int K) 
{
    int i=1,j=N;
    stack<int>st;
    int temp = 1;
    while(i<j)
    {
        for(int x=0; x<K && i!=j;x++)
        {
            st.push(temp++);
            i++;
        }
        for(int x=0;x<K && i!=j;x++)
        {
            st.push(N--);
            j--;
        }
    }
    return i;
}