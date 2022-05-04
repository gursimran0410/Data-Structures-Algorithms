class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> mp;
        for(auto it: nums){
            int otherNum = k - it;
            if(mp[otherNum] > 0){
                count++;
                mp[otherNum]--;
            } else {
                mp[it]++;    
            }
        }
        return count;
    }
};
