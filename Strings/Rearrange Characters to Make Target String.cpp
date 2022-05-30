class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int maxChar = INT_MAX;
        unordered_map<char, int> mp;
        unordered_map<char, int> mp1;
        for(auto it: s) mp[it]++;
        for(auto it: target) mp1[it]++;
        
        for(auto i: mp1){
            maxChar = min(maxChar, mp[i.first]/i.second);
        }
        return maxChar;
    }
};
