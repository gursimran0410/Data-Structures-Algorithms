#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    for(int i=0; i<testCases; i++){
        string s;
        cin >> s;
        int sum = 0, og=s.size();
        for(int i=0; i<s.size(); i++)
            sum+=(s[i]-'0');
        
        if(sum%9 == 0){
            s.insert(s.begin()+1,'0');
            cout << s << endl;
        }
        else{
            int nxt = sum/9;
            nxt++;
            int to_add = nxt*9-sum;
            
            for(int i=0; i<s.size(); i++){
                if(to_add+'0' < s[i]){
                    s.insert(s.begin()+i, to_add);
                    break;
                }
            }
            
            if(s.size() == og) s.push_back(to_add+'0');
            cout << s << endl;
        }
    }
    return 0;
}
