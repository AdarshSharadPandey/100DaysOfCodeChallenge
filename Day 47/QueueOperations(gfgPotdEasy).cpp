void insert(queue<int> &q, int k)
{
  q.push(k);
}
int findFrequency(queue<int> &q, int k)
{
  queue<int> p;
  p = q; 
  int count = 0;
  for(int i = 0; i < q.size(); i++)
  {
      if(k == p.front()) count++;
      p.pop();
  }
  if(count == 0) return -1;
  return count;
}