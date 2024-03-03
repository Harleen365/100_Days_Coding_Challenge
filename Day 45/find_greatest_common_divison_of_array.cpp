class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        int gcd=0;
        int maxgcd=INT_MIN;
        for(int i=1;i<=mini && i<=maxi;i++){
            if(mini%i==0 && maxi%i==0){
                gcd=i;
                maxgcd=max(maxgcd,gcd);
            }
        }
        return maxgcd;
    }
};
