vector<int> productExceptSelf(vector<int>& arr) 
{
    int n=arr.size();
    vector<int> answer(n,1);
    int left=1,right=1;
    for(int i=1;i<n;i++) left*=arr[i-1],answer[i]*=left;
    for(int i=n-2;i>=0;i--) right*=arr[i+1],answer[i]*=right;
    return answer;
}