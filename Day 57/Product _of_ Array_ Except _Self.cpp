class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);

        int leftpro=1;
        for(int i=0;i<n;i++){
         ans[i]*=leftpro;
         leftpro*=nums[i];
        }

        int rightpro=1;
        for(int i=n-1;i>=0;i--){
           ans[i]*=rightpro;
           rightpro*=nums[i];
        }

       
        return ans;

    }
};
