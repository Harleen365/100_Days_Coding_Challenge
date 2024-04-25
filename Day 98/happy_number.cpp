class Solution {
public:
    bool isHappy(int n) {
        if(n<10){
            return(n==1 || n==7);
        }
        long long sum=0;
        while(n>0){
            int last=n%10;
            sum+=last*last;
            n/=10;
        }
        return isHappy(sum);
    }
};
