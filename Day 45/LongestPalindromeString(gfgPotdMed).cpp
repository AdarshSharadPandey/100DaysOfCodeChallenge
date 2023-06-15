bool isPalindrome(string s , int l , int r)
{
    while(l<r)
        if(s[l++] != s[r--]) 
            return false;
    return true;
}
string longestPalin (string S) 
{
    int left = 0, right = 0 , n = S.size();
    for(int i = 0; i<n-1; i++)
        for(int j = n-1; j>=i; j--)
            if(!(i >= left && j <= right)  && isPalindrome(S , i, j) && j-i > right-left)
                left = i, right = j;
    return S.substr(left,right-left+1);
}