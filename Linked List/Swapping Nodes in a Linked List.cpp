class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p1 = head;
        while(k>1){
            p1 = p1->next;
            k--;
        }
        ListNode *slow = head, *fast = p1->next;
        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
        swap(slow->val, p1->val);
        return head;
    }
};
