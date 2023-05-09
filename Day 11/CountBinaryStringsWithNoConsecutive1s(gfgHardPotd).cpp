int mod = 1000000007; 
vector<vector<long long>> mul(vector<vector<long long>>& A, vector<vector<long long>>& B)
{
    int i, j;
    vector<vector<long long>> v(2, vector<long long>(2));
    v[0][0] = ((A[0][0]*B[0][0])%mod + (A[0][1]*B[1][0])%mod)%mod;
    v[0][1] = ((A[0][0]*B[0][1])%mod + (A[0][1]*B[1][1])%mod)%mod;
    v[1][0] = ((A[1][0]*B[0][0])%mod + (A[1][1]*B[1][0])%mod)%mod;
    v[1][1] = ((A[1][0]*B[0][1])%mod + (A[1][1]*B[1][1])%mod)%mod;
    return v;   
}
vector<vector<long long>> bin_pow(vector<vector<long long>>& A, long long n)
{
    vector<vector<long long>> v(2, vector<long long>(2, 1));
    while(n > 0)
    {
        if(n&1) v = mul(v, A);
        A = mul(A, A);
        n = n>>1;
    }
    return v;
}
int countStrings(long long int N) 
{
    vector<vector<long long>> v(2, vector<long long>(2));
    v[0][0] = 1;
    v[0][1] = 1;
    v[1][0] = 1;
    v[1][1] = 0;
    v = bin_pow(v, N);
    return v[0][0];
}