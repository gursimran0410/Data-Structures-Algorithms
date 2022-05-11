class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(i*j == 0 || i == grid.size()-1 || j == grid[0].size()-1){
                    dfs(grid, i, j);
                }
            }
        }
        
        int count = 0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    count++;
                }
            }
        }
        
        return count;
    }
    
    void dfs(vector<vector<int>>& grid, int row, int col){
        if(row < 0 || row > grid.size()-1 || col < 0 || col > grid[0].size()-1 || grid[row][col] != 1) return;
        
        grid[row][col] = 0;
        
        dfs(grid, row+1, col);
        dfs(grid, row, col+1);
        dfs(grid, row-1, col);
        dfs(grid, row, col-1);
    }
};
