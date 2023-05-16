ListNode* swapPairs(ListNode* head) 
{
    if(!head || !head->next) return head;
    ListNode* tempHead = head;
    ListNode* temp = tempHead->next;
    tempHead->next = tempHead->next->next;
    temp->next = tempHead;
    tempHead->next = swapPairs(tempHead->next);
    return temp;
}