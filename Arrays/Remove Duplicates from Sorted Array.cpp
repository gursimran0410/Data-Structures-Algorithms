class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        int front = 1, back = 0;
        int count = 1;
        for(auto itr:nums){
            if(front < nums.size()){
                if(nums[back] == nums[front]) front++;
                else{
                    back++;
                    nums[back] = nums[front];
                    front++;
                    count++;
                }   
            } 
            else break;
        }
        return count;
    }
};
