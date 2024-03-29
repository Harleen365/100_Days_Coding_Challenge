class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int freq=0;
        long long res=0;
        int max_ele=0;
        for(int i=0;i<n;i++){
            max_ele=max(max_ele,nums[i]);
        }
        for(int i=0,j=0;i<n;i++){

            if(nums[i]==max_ele){
                freq++;
            }
            if(freq<k){
                continue;
            }
            else{
                while(nums[j]!=max_ele && j<n){
                    res=res+n-i;
                    j++;
                }
                res=res+n-i;
                j++;
                freq--;
            }
        }
        return res;
    }
};
