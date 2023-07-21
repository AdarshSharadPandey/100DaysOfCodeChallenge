struct node *reverse (struct node *head, int k)
{ 
    node *slow = NULL, *fast = head, *mid = head, *main = head, *main2;
    if(k==1) return head;
    for(int i=0;i<k;i++)
    {
        if(fast!=NULL)
        {
            fast = fast -> next;
            mid -> next = slow;
            slow = mid;
            mid = fast;   
        }
    }
    head = slow;
    slow = NULL;
    main2 = fast;
    while(fast!=NULL)
    {
        for(int i=0;i<k;i++)
        {
            if(fast!=NULL)
            {
                fast = fast -> next;
                mid -> next = slow;
                slow = mid;
                mid = fast;
            }
            else break;
        }
        main -> next = slow;
        main = main2;
        main2 = fast;
        slow = NULL;
    }
    return head;
}