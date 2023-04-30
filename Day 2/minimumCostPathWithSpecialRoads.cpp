int minimumCost(vector<int>& start, vector<int>& target, vector<vector<int>>& specialRoads) 
{
    int startX = start[0] , startY = start[1], targetX = target[0] , targetY = target[1];
    if(startX == targetX && startY == targetY) return 0;
    map<pair<int,int>,int> cost;
    cost[{startX,startY}] = 0; 
    cost[{targetX,targetY}] = 1e9+7;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    pair<int,pair<int,int>> current = {0,{startX,startY}};
    pq.push(current);
    while(!pq.empty())
    {
        current = pq.top(); pq.pop();
        int currX = current.second.first,currY = current.second.second,currCost = current.first;
        if(currX == targetX && currY == targetY) return currCost;
        if(cost[{targetX,targetY}] > currCost + abs(currX-targetX)+abs(currY-targetY))
        {
            cost[{targetX,targetY}] = currCost + abs(currX-targetX) + abs(currY-targetY);
            pq.push({cost[{targetX,targetY}],{targetX,targetY}});
        }
        for(vector<int> &road : specialRoads)
        { 
            int toReachCost = currCost + abs(currX - road[0]) + abs(currY - road[1]) + road[4];
            if(cost.find({road[2],road[3]}) == cost.end() || cost[{road[2],road[3]}] > toReachCost)
            {
                cost[{road[2],road[3]}] = toReachCost;
                pq.push({toReachCost,{road[2],road[3]}});
            }
        }
    }
    return -1;
}