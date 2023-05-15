ListNode* swapNodes(ListNode* head, int k) 
{
    ListNode* temp=head;
    int length=0;
    while(temp) 
    {
        temp=temp->next;
        length++;
    }
    length=length+1-k;
    if(length==k) return head;
    temp=head;
    int count=1;
    ListNode* first=NULL;
    ListNode* second=NULL;
    while(temp) 
    {
        if(k==count) first=temp;
        if(length==count) second=temp;
        temp=temp->next;
        count++; 
    }
    int temp2=first->val;
    first->val=second->val;
    second->val=temp2;
    return head;
}