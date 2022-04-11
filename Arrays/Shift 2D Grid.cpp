class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if((int)grid.size() == 1 && (int)grid[0].size() == 1) return grid;
        
        vector<int> tempGrid;
        
        for(vector<int> column : grid){
            for(int row: column){
                tempGrid.push_back(row);
            }
        }
        
        k %= (int)tempGrid.size();
        
        rotate(tempGrid.begin(), tempGrid.begin()+tempGrid.size()-k, tempGrid.end());
        
        int count = 0;
        for(int i=0; i<(int)grid.size(); i++){
            for(int j=0; j<(int)grid[i].size(); j++){
                grid[i][j] = tempGrid[count];
                count++;
            }
        }
        
        return grid;
    }
};
