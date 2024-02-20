class Solution {
public:
    int totalMoney(int n) {
        int money=0;
        int week=0;
        for(int i=0;i<n;i++){
            if(i%7==0){
                week++;
            }
            money+=week+(i%7);
        }
        return money;
    }
};
