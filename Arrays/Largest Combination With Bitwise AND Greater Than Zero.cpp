class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int res = 0;
        for(int i=0; i<32; i++){
            int count = 0;
            
            for(auto it: candidates){
                count += (it>>i & 1);
            }
            
            res = max(count, res);
        }
        return res;
    }
};
