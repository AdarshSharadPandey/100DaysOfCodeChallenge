int getNthFromLast(Node *head, int n)
{
    int count = 0;
    Node *temp = head;
    while(temp)
    {
       count++;
       temp=temp->next;
    }
    if(n>count) return -1;
    n = count-n;
    temp = head;
    count = 0;
    while(count!=n)
    {
        count++;
        temp=temp->next;
    }
    return temp->data;
}