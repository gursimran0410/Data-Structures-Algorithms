class Solution {
public:
    int minDeletion(vector<int>& nums) {
        vector<int> ans;
        int cnt=0;
        for(auto it:nums){
            if(ans.size()%2==0)ans.push_back(it);
            else if(ans.back()!=it){
                ans.push_back(it);
            }
            else{
                cout << it;
                cnt++;
            }
        }
        if(ans.size()%2==1)cnt++;
        return cnt;
    }
};
