class Solution {
public:
    int maxArea(vector<int>& height) {
        int back = 0, front = height.size()-1;
        int maxStorage = 0;
        while(back <= front){
            maxStorage = max(maxStorage, min(height[back], height[front])*(front-back));
            if(height[back] > height[front]) front--;
            else back++;
        }
        return maxStorage;
    }
};
