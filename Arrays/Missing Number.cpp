class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int firstNSum = n * (n+1)/2;
        int totalSum = 0;
        for(auto it: nums){
            totalSum += it;
        }
        return firstNSum - totalSum;
    }
};
