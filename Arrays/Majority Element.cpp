class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for(int num : nums){
            if(!count) candidate = num;
            if(num == candidate) count++;
            else count--;
        }
        return candidate;
    }
};
