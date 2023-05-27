Node *divide_half(Node *head)
{
    struct Node *slow=head,*fast=head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node *reverseList(Node *head)
{
    if(head==NULL || head->next==NULL)
        return NULL;
    struct Node *prev=NULL,*next=head;
    while(next)
    {
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
struct Node* modifyTheList(struct Node *head)
{   
    struct Node *half=divide_half(head);
    Node *reverse=reverseList(half->next);
    half->next=NULL;
    struct Node *head1=head,*head2=reverse;
    while(head1 && head2)
    {
        int data=head1->data;
        head1->data=head2->data-head1->data;
        head2->data=data;
        head1=head1->next;
        head2=head2->next;
    }
    reverse=reverseList(reverse);
    half->next=reverse;
    return head;
}