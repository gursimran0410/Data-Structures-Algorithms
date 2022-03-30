class Solution {
public:
    bool validPalindrome(string s) {
        int front = 0, back = s.size()-1, count = 0;
        return checkPal(s, front, back, count);
    }
    
    bool checkPal(string s, int front, int back, int count){
        if(count > 1) return false;
        
        while(front < back){
            if(s[front] == s[back]) front++, back--;
            else{
                return checkPal(s, front+1, back, count+1) || checkPal(s, front, back-1, count+1);
            }
        }
        return true;
    }
};
