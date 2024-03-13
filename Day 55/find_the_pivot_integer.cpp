class Solution {
public:
    int pivotInteger(int n) {
        int t=0;
        for(int i=1;i<=n;i++){
            t+=i;
        }
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
            if((t-sum+i)==sum){
                return i;
            }
        }
        return -1;
    }
};
