double average(vector<int>& salary) 
{
    double sum=salary[0];
    int n = salary.size(),maxi=salary[0],mini=salary[0];
    for(int i=1;i<n;i++)  
    {
        sum+=salary[i];
        maxi=max(salary[i],maxi);
        mini=min(salary[i],mini);
    }
    sum-=mini;
    sum-=maxi;
    return sum/(double)(n-2);
}