string removeTrailingZeros(string num) 
{
    int i=num.size()-1;
    while(num[i]=='0') i--;
    string ans="";
    for(int k =0;k<=i;k++) ans+=num[k];
    return ans;
}