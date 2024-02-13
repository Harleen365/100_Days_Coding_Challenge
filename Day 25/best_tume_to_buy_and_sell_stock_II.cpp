class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxpro=0;
        if(n<=1){
            return 0;
        }
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                maxpro+=prices[i]-prices[i-1];
            }
        }
        return maxpro;
    }
};
