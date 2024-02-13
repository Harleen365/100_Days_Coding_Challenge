class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h=0;
        sort(citations.rbegin(),citations.rend());
        for(int i=0; i<citations.size();i++){
            if(citations[i]>=i+1){
                h++;
            }
            else{
                break;
            }
        }
        return h;
    }
};
