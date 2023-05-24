int getMaximum(int N, vector<int> &arr) 
{
    long long int sum = 0;
    for(int i= 0 ; i < arr.size(); i++)
        sum+= arr[i];
    for(int i= arr.size(); i>1 ; i--)
        if(sum%i == 0) return i;
    return 1;
}