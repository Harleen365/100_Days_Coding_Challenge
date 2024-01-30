class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size=matrix.size();
        int col_size=matrix[0].size();
        for(int i=0;i<row_size;i++){
            for(int j=0;j<col_size;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
