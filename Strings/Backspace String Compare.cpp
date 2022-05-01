class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> str;
        for(auto it: s){
            if(it == '#' && !str.empty()) str.pop();
            else if(it != '#') str.push(it);
        }
        s.clear();
        while(!str.empty()){
            s += str.top();
            str.pop();
        }
        
        for(auto it: t){
            if(it == '#' && !str.empty()) str.pop();
            else if(it != '#') str.push(it);
        }
        t.clear();
        while(!str.empty()){
            t += str.top();
            str.pop();
        }
        
        return (s == t);
    }
};
