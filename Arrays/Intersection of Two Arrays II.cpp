class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> db;
        vector<int> res;
        
        if(nums1.size() < nums2.size()){
            for(auto num: nums1) db[num]++;
            for(auto x: nums2){
                if(db[x]-- > 0) res.push_back(x);
            }
        } else {
            for(auto num: nums2) db[num]++;
            for(auto x: nums1){
                if(db[x]-- > 0) res.push_back(x);
            }
        }
        return res;
    }
};
