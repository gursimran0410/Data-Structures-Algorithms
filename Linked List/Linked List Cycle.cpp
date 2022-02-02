class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        {
            return false;
        }
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(slow!=NULL)
        {
            if(slow==fast)
            {
                return true;
            }
            if(fast==NULL || fast->next==NULL)
            {
                break;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};
