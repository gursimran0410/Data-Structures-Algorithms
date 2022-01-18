class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return NULL;
        int c = (l1? l1->val:0) + (l2? l2->val:0);
        ListNode *newHead = new ListNode(c%10), *next = l1? l1->next:NULL;
        c /= 10;
        if(next) next->val += c;
        else if(c) next = new ListNode(c);
        newHead->next = addTwoNumbers(l2? l2->next:NULL, next);
        return newHead;
    }
};
