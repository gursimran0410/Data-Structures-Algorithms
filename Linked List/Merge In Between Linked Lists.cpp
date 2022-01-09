ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* p1 = list1;
    ListNode* p2 = list1;
    while(b+1 > 0){
        if(a > 1){
            p1 = p1->next;
            a--;
        }
        p2 = p2->next;
        b--;
    }
    p1->next = list2;
    while(p1->next!=NULL){
        p1 = p1->next;
    }
    p1->next = p2;
    return list1;
}
