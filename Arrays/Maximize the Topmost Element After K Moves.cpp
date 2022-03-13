class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return k % 2 == 1 ? -1 : nums[0];
        }
        int maxi = 0;
        for(int i = 0;i < n;i++){
            if(k == i || k >= i+2){
                maxi = max(maxi, nums[i]);
            }
        }
        return maxi;
    }
};
