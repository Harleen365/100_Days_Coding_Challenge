class Solution {
public:
   bool valid(vector<vector<char>>& board,int i,int j){
       for(int k=0;k<9;k++){
           if(board[i][j]==board[i][k] && k!=j){
               return false;
           }
           if(board[i][j]==board[k][j] && k!=i){
               return false;
           }
            if (board[i][j] == board[3 * (i / 3) + k / 3][3 * (j / 3) + k % 3] && !(i == 3 * (i / 3) + k / 3 && j == 3 * (j / 3) + k % 3)) {
            return false;
        }
       }
       return true;
   }



    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.' && !valid(board,i,j)){
                    return false;
                }
            }
        }
        return true;
    }
};
