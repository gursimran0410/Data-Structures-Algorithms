class Solution {
public:
    priority_queue<double> queue;
    int halveArray(vector<int>& nums) {
        double sum = 0, num = 0;
        for(int i=0; i<nums.size(); i++) queue.push(nums[i]),sum+=nums[i];
        for(int i=1; i<=nums.size(); i++)
        {
            double top = a.top();a.pop();
            num += top/2.0;
            queue.push(top/2.0);
            if(num >= sum/2.0) return i;
        }
        return nums.size();
    }
};
