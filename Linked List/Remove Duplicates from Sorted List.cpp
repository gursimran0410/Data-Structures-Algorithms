class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
             return head;
        }
        ListNode* prev = head;
        if(prev->val == prev->next->val){
            ListNode* temp = prev->next;
            prev->next = prev->next->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            prev = prev->next;
        }
        deleteDuplicates(prev);
        return head;
    }
};
