vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
{
    unordered_map<int, int> hash;
    stack<int>st;
    st.push(-1);
    for (int i = nums2.size()-1; i >= 0; i--)
    {
        while (st.top() != -1 && nums2[i] > st.top()) st.pop();
        hash[nums2[i]] = st.top();
        st.push(nums2[i]);
    }
    for (int i = 0; i < nums1.size(); i++)
        nums1[i] = hash[nums1[i]];
    
    return nums1;  
}