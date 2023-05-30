class MyHashSet 
{
  public:
    vector<int> v;
    MyHashSet() 
    {
        v.resize(1000001);
    }
    void add(int key) 
    {
        v[key]=1;
    }
    void remove(int key) 
    {
        v[key]=0;
    }
    bool contains(int key) 
    {
        return v[key];
    }
};