string convertToTitle(int columnNumber)
{
    string ans = "";
    char c;
    while(columnNumber!=0)
    {
        int rem = columnNumber%26; 
        if(rem==0) c = 'Z'; 
        else c = char('A' + rem - 1 ); 
        ans += c; 
        if(rem==0) columnNumber = columnNumber/26 - 1;
        else columnNumber = columnNumber / 26;
    }
    reverse(ans.begin(), ans.end()); 
    return ans;
}