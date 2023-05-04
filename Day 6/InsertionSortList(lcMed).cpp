ListNode* insertionSortList(ListNode* head) 
{
    if(!head || !head->next) return head;
    ListNode *dummy = new ListNode(-1), *curr = head -> next;
    dummy -> next = head;
    ListNode *prev = head;
    while(curr) 
    {
        if(curr -> val < prev -> val) 
        {
            ListNode *now = curr, *temp = dummy;
            curr = curr -> next;
            while(temp->next->val < now->val) temp=temp -> next;
            ListNode *next = temp->next;
            temp -> next = now;
            now -> next = next;
            prev -> next = curr;
        }
        else 
        {
            prev = curr;
            curr = curr -> next;
        }
    }
    prev -> next = NULL;
    return dummy->next;
}