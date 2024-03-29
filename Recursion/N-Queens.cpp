class Solution {
public:
    void solve(int col, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, vector<vector<string>> &ans, vector<string> &board, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(leftRow[row]==0 && upperDiagonal[row+col]==0 && lowerDiagonal[n-1+col-row]==0){
                board[row][col] = 'Q';
                leftRow[row] = 1;
                upperDiagonal[row+col] = 1;
                lowerDiagonal[n-1+col-row] = 1;
                solve(col+1, leftRow, upperDiagonal, lowerDiagonal, ans, board, n);
                board[row][col] = '.';
                leftRow[row] = 0;
                upperDiagonal[row+col] = 0;
                lowerDiagonal[n-1+col-row] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s(n, '.');
        for(int i=0; i<n; i++){
            board.push_back(s);
        }
        vector<int> leftRow(n, 0), upperDiagonal(2*n-1, 0), lowerDiagonal(2*n-1, 0);
        solve(0, leftRow, upperDiagonal, lowerDiagonal, ans, board, n);
        return ans;
    }
};
