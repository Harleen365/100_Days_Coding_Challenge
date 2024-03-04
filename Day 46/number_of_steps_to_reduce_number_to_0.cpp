class Solution {
public:
    int numberOfSteps(int num) {
        int steps=0;
        if(num==0){
            return 0;
        }
        while(num!=0){
            if(num%2==0){
                num/=2;
                steps++;
            }
            if(num%2!=0){
                num--;
                steps++;
            }
        }
        return steps;
    }
};
