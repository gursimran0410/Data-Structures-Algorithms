class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto it: s){
            if(it == ')' || it == ']' || it == '}'){
                if(stk.empty()) return false;
                else{
                    switch(it){
                        case ')':
                            if(stk.top() == '(') stk.pop();
                            else return false;
                            break;
                        case '}':
                            if(stk.top() == '{') stk.pop();
                            else return false;
                            break;
                        case ']':
                            if(stk.top() == '[') stk.pop();
                            else return false;
                            break;
                    }
                }
            } else {
                stk.push(it);
            }
        }
        
        return stk.empty();
    }
};
