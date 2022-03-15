class Solution {
public:
    int uniquePaths(vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp, int i = 0, int j = 0){
        if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] == 1 || obstacleGrid[0][0] == 1) return 0;
        
        if(i == obstacleGrid.size()-1 && j == obstacleGrid[0].size()-1) return 1;
        if(i > obstacleGrid.size()-1 || j > obstacleGrid[0].size()-1 || obstacleGrid[i][j] == 1) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        else return dp[i][j] = uniquePaths(obstacleGrid, dp, i+1, j) + uniquePaths(obstacleGrid, dp, i, j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size()));
        for(int i=0; i<obstacleGrid.size(); i++){
            for(int j=0; j<obstacleGrid[0].size(); j++){
                dp[i][j] = -1;
            }
        }
        return uniquePaths(obstacleGrid, dp);
    }
};
