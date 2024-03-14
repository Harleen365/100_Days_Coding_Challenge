class Solution {
public:
    bool xorGame(vector<int>& nums) {
      int n=nums.size();
      int xorr=0;
      int z=0;
      for(int i=0;i<n;i++){
        xorr^=nums[i];
        if(nums[i]==0){
            z++;
        }
        }
        if(z==n){
            return false;
        }
        if(xorr==0){
            return  true;
        }
        if(n%2==0){
            return true;
        }
        return false;
       
    }
};
