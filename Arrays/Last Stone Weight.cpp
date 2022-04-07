class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        int st1, st2;
        for(auto it: stones) q.push(it);
        while(q.size() > 1){
            st1 = q.top(); q.pop();
            st2 = q.top(); q.pop();
            if(st1 != st2) q.push(st1-st2);
        }
        
        if(q.empty()) return 0;
        return q.top();
    }
};
