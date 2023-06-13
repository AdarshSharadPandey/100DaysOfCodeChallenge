vector<int> kLargest(int arr[], int n, int k) 
{
   vector<int>ans;
   sort(arr,arr+n);
   for(int j=n-1;j>n-k-1;j--)
       ans.push_back(arr[j]);
   return ans; 
}