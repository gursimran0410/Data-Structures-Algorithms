class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        int pw = intLength%2 == 0 ? (intLength/2-1) : (intLength/2);
        int start = pow(10, pw);
        
        vector<long long> qans;
        for(auto q:queries){
            string ans = to_string(start + q - 1);
            string rev = ans;
            reverse(rev.begin(), rev.end());
            
            if(intLength%2 == 0) ans += rev;
            else ans += rev.substr(1, rev.size()-1);
            
            if(ans.size() == intLength) qans.push_back(stoll(ans));
            else qans.push_back(-1);
        }
        
        return qans;
    }
};
