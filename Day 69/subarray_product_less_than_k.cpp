class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int n=nums.size();
        int product=1;
        int count=0;
        int start=0;
        int end=0;
        for(end=0;end<n;end++){
             product*=nums[end];
             while(product>=k){
                product/=nums[start];
                start++;
             }
             count+=end-start+1;
        }
        return count;
    }
};s
