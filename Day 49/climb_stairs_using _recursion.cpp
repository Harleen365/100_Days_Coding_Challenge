//Note:Will  do it further using DP but the concept of recursion is clear... :)
class Solution {
public:
    int climbStairs(int n) {
        //base case
        if(n<0){
            return 0;
        }
        if(n==0){
            return 1;
        }

        //R.C
        int ans=climbStairs(n-1)+climbStairs(n-2);
        return ans;
    }
};
