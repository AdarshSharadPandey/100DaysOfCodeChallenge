class MyHashMap 
{
   public:
    vector<pair<int,int> > v;
    MyHashMap() {}
    void put(int key, int value) 
    {
        remove(key);
        v.push_back({key,value});
    }
    int get(int key) 
    {
        for(auto i:v)
            if(i.first == key)
                return i.second;
        return -1;
    }
    void remove(int key)
    {
        if(get(key) != -1)
        {
            vector<pair<int,int>> :: iterator it;
            for(it = v.begin(); it != v.end(); it++)
            {
                if(it->first == key)
                {
                    v.erase(it);
                    return;
                }
            }
        }    
    }
};