class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26] = {0};
        for(auto it: magazine) hash[it-'a']++;
        for(auto it: ransomNote){
            if(--hash[it-'a'] < 0) return false;
        }
        return true;
    }
};
