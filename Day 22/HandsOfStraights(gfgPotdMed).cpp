bool isStraightHand(int N, int groupSize, vector<int> &hand) 
{
    if(N%groupSize != 0) return false;
    map<int, int> hash;
    for(int i=0; i<N; i++) hash[hand[i]]++;
    while(!hash.empty())
    {
        int temp = 0, it = 0;
    	for (auto itr = hash.begin(); temp != groupSize; ++itr) 
    	{
    	    if(temp!=0 && it+1 != itr->first) return false;
    	    itr->second--;
          	it = itr->first;
    	    if(itr->second == 0) hash.erase(itr->first);
          	temp++;
    	}
    }
    return true;
}