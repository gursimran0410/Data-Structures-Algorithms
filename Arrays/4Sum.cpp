class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty()) return res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int target2 = target - nums[i] - nums[j];
                int front = j+1;
                int back = n-1;
                
                while(front < back){
                    int twoSum = nums[front] + nums[back];
                    
                    if(twoSum > target2) back--;
                    else if(twoSum < target2) front++;
                    else{
                        vector<int>quadruplets(4,0);
                        quadruplets[0] = nums[i];
                        quadruplets[1] = nums[j];
                        quadruplets[2] = nums[front];
                        quadruplets[3] = nums[back];
                        res.push_back(quadruplets);
                        
                        while(front < back && nums[front] == quadruplets[2]) front++;
                        
                        while(front < back && nums[back] == quadruplets[3]) back--;
                    }
                }
                while(j+1 < n && nums[j+1] == nums[j]) j++;
            }
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        return res;
    }
};
