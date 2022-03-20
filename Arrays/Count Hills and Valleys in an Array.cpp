class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> v;
        int res = 0;
        for(auto x:nums) if(v.empty() || v.back()!=x) v.push_back(x);
        for(int i=1; i<v.size()-1; i++){
            if((v[i] > v[i-1] && v[i] > v[i+1]) || (v[i] < v[i-1] && v[i] < v[i+1])) res++;
        }
        return res;
    }
};
