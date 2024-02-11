class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        std::vector<std::vector<int>> newboard(board);
        int countlive=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int countlive= countliveneighbors(board,i,j);
                if(board[i][j]==1){
                    if (countlive<2 || countlive>3){
                        newboard[i][j]=0;
                    }
                    if (countlive==2 || countlive==3){
                        newboard[i][j]=1;
                    }
                }
                else{
                    if(countlive==3){
                        newboard[i][j]=1;
                    }
                }
            }
        }
        board=newboard;
    }
    private:
    int countliveneighbors(vector<vector<int>>& board, int row, int col) {
        int n = board.size();
        int m = board[0].size();
        int countLive = 0;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (i == 0 && j == 0) continue;
                int newRow = row + i;
                int newCol = col + j;
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m) {
                    countLive += board[newRow][newCol] == 1 ? 1 : 0;
                }
            }
        }
        return countLive;
    }
};
