string predictPartyVictory(string senate) 
{
    queue<int> q1, q2;
    for(int i = 0; i<senate.size(); i++)
    {
        if(senate[i] == 'R') q1.push(i);
        else q2.push(i);
    }
    while(!q1.empty() && !q2.empty())
    {
        int Ri = q1.front(), Di = q2.front();
        q1.pop(), q2.pop();
        if(Ri<Di) q1.push(Ri+senate.size());
        else q2.push(Di+senate.size());
    }
    if(q1.size()>q2.size()) return "Radiant";
    return "Dire";
}