class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = m ? matrix[0].size() : 0;
        int row = 0, column = n-1;
        while(row < m && column >= 0){
            if(matrix[row][column] == target) return true;
            matrix[row][column] > target ? column-- : row++;
        }
        return false;
    }
};
