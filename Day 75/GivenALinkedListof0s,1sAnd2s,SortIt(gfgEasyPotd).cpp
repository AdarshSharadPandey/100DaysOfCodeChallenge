Node* segregate(Node *head) 
{
    Node* temp=head;
    int count0=0,count1=0,count2=0;
    while(temp!=NULL)
    {
        if(temp->data==0)count0++;
        else if(temp->data==1)count1++;
        else count2++;
        temp=temp->next;
        
    }
    temp=head;
    while(count0--)
    {
        temp->data=0;
        temp=temp->next;
    }
    while(count1--)
    {
        temp->data=1;
        temp=temp->next;
    }
    while(count2--)
    {
        temp->data=2;
        temp=temp->next;
    }
    return head;
}