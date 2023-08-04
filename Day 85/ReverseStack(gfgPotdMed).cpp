void Reverse(stack<int> &St)
{
    stack<int>s;
    while(!St.empty())
    {
        s.push(St.top());
        St.pop();
    }
    St=s;
}