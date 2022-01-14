class Solution {
public:
    vector<int> nextLargerNodes(ListNode* h) {
        vector<int> res, stack;
        while (h != nullptr) {
            res.push_back(h->val);
            h = h->next;
        }
        for (int i = res.size() - 1; i >= 0; --i) {
            int curr_e = res[i];
            //remove all smaller than current
            while (!stack.empty() && stack.back() <= curr_e) stack.pop_back();
            res[i] = stack.empty()? 0: stack.back();
            stack.push_back(curr_e);

        }
        return res;
    }
};
