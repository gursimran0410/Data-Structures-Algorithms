class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string, int> mp;
        vector<string> ans;
        for(int i=0; i<words.size(); i++){
            string word = words[i];
            sort(begin(word), end(word));
            if(mp.find(word) == mp.end() || mp[word] != i-1) ans.push_back(words[i]);
            mp[word] = i;
        }
        return ans;
    }
};
