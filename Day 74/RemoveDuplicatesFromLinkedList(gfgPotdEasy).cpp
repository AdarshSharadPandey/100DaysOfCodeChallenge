Node * removeDuplicates( Node *head) 
{
    unordered_map<int,int> hash;
    Node* prev = NULL;
    Node* curr = head;
    while(curr!=NULL)
    {
        if(hash.find(curr->data)!=hash.end())
        {
            prev->next = curr->next;
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
        else
        {
            hash[curr->data]++;
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}