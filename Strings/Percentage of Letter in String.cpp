class Solution {
public:
    int percentageLetter(string s, char letter) {
        double count = 0;
        
        for(auto it: s) if(it == letter) count++;
        
        return (count/s.size())*100;
    }
};
