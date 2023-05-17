int pairSum(ListNode* head) 
{
    ListNode *slow=head,*fast=head;
    while(fast!=NULL&& fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode*head1=slow->next;
    ListNode*prev=NULL;
    while(head1->next!=NULL)
    {
        ListNode*temp=head1->next;
        head1->next=prev;
        prev=head1;
        head1=temp;
    }
    head1->next=prev;
    slow->next=head1;
    int ans=0;
    slow=slow->next;
    while(slow!=NULL)
    {
        int temp=(head->val+slow->val);
        ans=max(temp,ans);
        slow=slow->next;
        head=head->next;
    }
    return ans;
}