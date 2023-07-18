LRUCache(int capacity)
{
    cap = capacity;	
    head->next = tail;
    tail->prev = head;
}
int get(int key) 
{
    if (pairs.find(key) != pairs.end())
    {
        Node *result = pairs[key];	
        int ans = result->val;	
        pairs.erase(key);	
        deleteNode(result);	
        addNode(result);	
        pairs[key] = head->next;
        return ans;
    }
    return -1;
}
void put(int key, int value) 
{
    if (pairs.find(key) != pairs.end())
    {
        Node *res = pairs[key];	
        pairs.erase(key);
        deleteNode(res);
    }
    if (pairs.size() == cap)
    {
        pairs.erase(tail->prev->key);
        deleteNode(tail->prev);
    }
    addNode(new Node(key, value));
    pairs[key] = head->next;
}