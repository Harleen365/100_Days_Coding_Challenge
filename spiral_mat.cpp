class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;

        int srow=0;
        int scol=0;
        int erow=row-1;
        int ecol=col-1;
        while(count<total){
            //for starting row
            for(int index=scol; count<total && index<=ecol;index++){
                ans.push_back(matrix[srow][index]);
                count++;

            }
            srow++;
            //for ending col
            for(int index=srow; count<total && index<=erow;index++){
                ans.push_back(matrix[index][ecol]);
                  count++;

            }
            ecol--;
            //for ending row
            for(int index=ecol; count<total && index>=scol;index--){
                ans.push_back(matrix[erow][index]);
                  count++;

            }
            erow--;
            //for starting col
            for(int index=erow; count<total && index>=srow;index--){
                ans.push_back(matrix[index][scol]);
                  count++;
            }
            scol++;

        }
       return ans;
    }
};
