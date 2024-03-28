class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        int l=0;
        int r=0;
        int ans=1;
        while(l<n && r<n){
          mp[nums[r]]++;
          while(mp[nums[r]]>k){
            mp[nums[l]]--;
            l++;
          }
          ans=max(ans,r-l+1);
          r++;
        }
        return ans;
 }
};
