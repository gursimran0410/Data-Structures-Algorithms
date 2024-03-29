/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return head;
        
        Node* iter = head;
        Node* front = head;
        while(iter!=NULL){
            front = iter->next;
            Node* copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        
        iter = head;
        while(iter != NULL){
            if(iter->random != NULL) iter->next->random = iter->random->next;
            iter = iter->next->next;
        }
        
        iter = head;
        Node* pseudoHead = new Node(0);
        pseudoHead = iter->next;
        Node* copy = pseudoHead;
        while(iter != NULL){
            front = iter->next->next;
            copy->next = front == NULL ? NULL : front->next;
            iter->next = front;
            iter = front;
            copy = copy->next;
        }
        
        return pseudoHead;
    }
};
