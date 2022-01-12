class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>a1;
        ListNode* i=head,*j=head;
        while(j&&j->next)
        {
            a1.push_back(i->val);
            i=i->next;
            j=j->next->next;
        }
        int ans=INT_MIN;
        int index=0;
        while(i)
        {
            ans=max(ans,a1[a1.size()-index-1]+i->val);
            i=i->next;
            index++;
        }
        return ans;
    }
};
