vector<int> asteroidCollision(vector<int>& asteroids) 
{
    stack<int> right;
    for(int i=0;i<asteroids.size();i++)
    {
        if(asteroids[i]>0)
        {
            right.push(i);
            continue;
        }
        while(!right.empty())
        {
            if(asteroids[right.top()]>abs(asteroids[i]))
            {        
                asteroids[i]=0;
                break;
            }
            else if(asteroids[right.top()]==abs(asteroids[i]))
            {
                asteroids[right.top()]=0;
                right.pop();
                asteroids[i]=0;
                break;
            }
            asteroids[right.top()]=0;
            right.pop();
        }
    }   
    vector<int> ans;
    for(int i=0;i<asteroids.size();i++)
        if(asteroids[i]!=0)
            ans.push_back(asteroids[i]);
    return ans;
}