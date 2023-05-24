long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) 
{
    int n1 = nums1.size();
    vector<pair<int,int>> v;
    for(int i=0; i<n1; i++)
        v.push_back({nums2[i], nums1[i]});
    sort(v.rbegin(), v.rend());
    long long int ans = 0, currSum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<k-1; i++)
    {
        currSum += v[i].second;
        pq.push(v[i].second);
    }
    for(int i=k-1; i<n1; i++)
    {
        currSum += v[i].second;
        pq.push(v[i].second);
        ans = max(ans, currSum * v[i].first);
        currSum -= pq.top();
        pq.pop();
    }
    return ans;
}