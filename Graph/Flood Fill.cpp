class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<bool>> visited(image.size(), vector<bool>(image[0].size(), false));
        dfs(image, sr, sc, newColor, image[sr][sc], visited);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int baseColor, vector<vector<bool>>& visited){
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != baseColor || visited[sr][sc]) return;
        
        visited[sr][sc] = true;
        image[sr][sc] = newColor;
        
        dfs(image, sr+1, sc, newColor, baseColor, visited);
        dfs(image, sr, sc+1, newColor, baseColor, visited);
        dfs(image, sr-1, sc, newColor, baseColor, visited);
        dfs(image, sr, sc-1, newColor, baseColor, visited);
    }
};
