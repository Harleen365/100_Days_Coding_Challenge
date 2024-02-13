class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n=prices.size();
        sort(prices.begin(),prices.end());
        int i=0;
        int spent=0;
        int units=0;
        while(i<n){
            int units=prices[i]+prices[i+1];
             spent=money-units;
            i++;
           break;
        }
        if(spent>=0){
            return spent;
        }
        return money;
    }
};
