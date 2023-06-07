int minFlips(int a, int b, int c) 
{
    int ans = 0;
    while(a||b||c)
    {
        int A = a%2, B= b%2, C = c%2;
        if(C) ans += (A!=1 && B!=1);
        else ans += A+B;
        a/=2, b/=2, c/=2;
    }
    return ans;
}