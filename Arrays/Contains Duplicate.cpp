class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        if(nums.size()==1) return false;
        
        unordered_map<int, int> mp;
        for(auto num: nums){
            mp[num] += 1;
            if(mp[num] >= 2) return true;
        }
        return false;
    }
};
