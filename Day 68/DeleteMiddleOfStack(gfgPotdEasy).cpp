void deleteMid(stack<int>&s, int size)
{
    stack<int> s2;
    int mid = ceil((size+1)/2);
   while(size!=mid)
   {
       s2.push(s.top());
       s.pop();
       size--;
   }
   s.pop();
   while(!s2.empty())
   {
       s.push(s2.top());
       s2.pop();
   }
   
}