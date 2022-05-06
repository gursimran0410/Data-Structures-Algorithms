class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stk;
        for(auto it: s){
            if(stk.empty() || stk.top().first != it){
                stk.push({it, 1});   
            }
            else if(stk.top().first == it){
                pair<char, int> p = stk.top();
                stk.pop();
                stk.push({p.first, p.second+1});
            }
            
            if(stk.top().second == k){
                stk.pop();
            }
        }
        
        s.clear();
        
        stack<pair<char, int>> nStk;
        
        while(!stk.empty()){
            nStk.push(stk.top());
            stk.pop();
        }
        
        while(!nStk.empty()){
            int charCount = nStk.top().second;
            while(charCount--){
                s += nStk.top().first;
            }
            nStk.pop();
        }
        
        return s;
    }
};



class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stk;
        
        for(auto it: s){
            if(stk.size() == 0 || stk.back().first != it) stk.push_back({it, 1});
            else if(stk.back().first == it){
                pair<char, int> p = stk.back();
                stk.pop_back();
                stk.push_back({p.first, p.second+1});
            }
            
            if(stk.back().second == k) stk.pop_back();
        }
        s.clear();
        
        for(auto it: stk) s.append(it.second, it.first);
        
        return s;
    }
};
