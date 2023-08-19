SinglyLinkedListNode* mergeInBetween(SinglyLinkedListNode* list1,SinglyLinkedListNode* list2 , int a,int b)
{
    
    SinglyLinkedListNode* f = list1 , *bl = list1 , *l = list2;
    a--;
    b--;
    
    int d = b-a;
     a--;
    while(l->next!=NULL)l = l->next;
    while(d--)f=f->next;
    while(a--){bl=bl->next;f=f->next;}
    bl->next= list2;
    l->next = f;
    
    // prettyPrintLinkedList(list1);
return list1;
}