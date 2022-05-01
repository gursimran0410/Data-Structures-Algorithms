class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                int pos = abs(matrix[i][j])-1;
                if(matrix[i][pos] < 0) return false;
                matrix[i][pos] = -matrix[i][pos];
            }
        }
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                int pos = abs(matrix[j][i])-1;
                if(matrix[pos][i] > 0) return false;
                matrix[pos][i] = abs(matrix[pos][i]);
            }
        }
        
        return true;
    }
};
