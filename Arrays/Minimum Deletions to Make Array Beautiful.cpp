class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int del = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1] && ((i-del)%2 == 0)) del++;
        }
        if((nums.size() - del)%2 == 1) del++;
        return del;
    }
};
