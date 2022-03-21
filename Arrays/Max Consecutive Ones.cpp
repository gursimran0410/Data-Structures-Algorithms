class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int maxCount = 0;
        int count = 0;
        for(auto itr:nums){
            if(itr == 1){
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};
