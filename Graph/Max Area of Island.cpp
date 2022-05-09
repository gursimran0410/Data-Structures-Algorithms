class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        int finalMaxArea = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    finalMaxArea = max(dfs(grid, i, j), finalMaxArea);
                }
            }
        }
        return finalMaxArea;
    }
    
    int dfs(vector<vector<int>>& grid, int row, int column){
        if(row < 0 || row >= grid.size() || column < 0 || column >= grid[0].size() || grid[row][column] == 0) return 0;
        
        grid[row][column] = 0;
        
        return 1 + dfs(grid, row+1, column) + dfs(grid, row, column+1) + dfs(grid, row-1, column) + dfs(grid, row, column-1);
    }
};
