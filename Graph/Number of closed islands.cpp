class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(i*j == 0 || i == grid.size()-1 || j == grid[0].size()-1){
                    dfs(grid, i, j);
                }
            }
        }
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 0){
                    dfs(grid, i, j);
                    res++;
                }
            }
        }
        return res;
    }
    
    void dfs(vector<vector<int>>& grid, int row, int col){
        if(row<0 || row>grid.size()-1 || col<0 || col>grid[0].size()-1 || grid[row][col]) return;
        
        grid[row][col] = 1;
        
        dfs(grid, row+1, col);
        dfs(grid, row, col+1);
        dfs(grid, row-1, col);
        dfs(grid, row, col-1);    
    }
};
