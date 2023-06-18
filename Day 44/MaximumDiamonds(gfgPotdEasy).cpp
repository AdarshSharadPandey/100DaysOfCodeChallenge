long long maxDiamonds(int A[], int N, int K) 
{
    long long ans = 0;
    priority_queue<int,vector<int>> pq;
    for(int i = 0; i<N; i++) pq.push(A[i]);
    for(int j = 0; j<K; j++)
    {
        ans += pq.top();
        pq.push(pq.top()/2);
        pq.pop();
    }
    return ans;
}