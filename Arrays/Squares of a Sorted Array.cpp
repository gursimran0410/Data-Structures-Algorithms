class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0, end=nums.size()-1, pos = nums.size()-1;
        vector<int> res(nums.size());
        while(start <= end)
        {
            if(abs(nums[start]) < abs(nums[end])) {
                res[pos--] = nums[end] * nums[end];
                end--;
            } else{
                res[pos--] = nums[start] * nums[start];
                start++;
            }
        }
        return res;
    }
};
