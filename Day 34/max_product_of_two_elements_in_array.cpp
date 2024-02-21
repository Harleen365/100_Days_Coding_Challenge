class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxpro=INT_MIN;
        for(int i=0;i<n;i++){
            int maxi=nums[i]-1;
            for(int j=i+1;j<n;j++){
                int maxj=nums[j]-1;
                int pro=maxi*maxj;
                if(pro>maxpro){
                    maxpro=pro;
                }
            }
        }
        return maxpro;
    }
};
