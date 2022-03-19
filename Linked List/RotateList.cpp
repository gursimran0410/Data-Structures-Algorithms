/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head== nullptr || k==0) return head;
        ListNode *node = head;
        int len = 0;
        while(node){
            node= node->next;
            ++len;
        }
        k = k%len;
        if(k==0) return head;
        ListNode *fast = head;
        ListNode *slow = head;
        while(k>0){
            fast = fast->next;
            --k;
        }
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode *newHead = slow->next;
        slow->next = nullptr;
        fast->next = head;
        return newHead;
    }
};
