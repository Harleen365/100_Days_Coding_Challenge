class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minlength=INT_MAX;
        int right=0;
        int left=0;
        int window=0;
        for(int right=0;right<n;right++){
        window+=nums[right];
        while(window>=target){
            minlength=min(minlength,right-left+1);
            window-=nums[left];
            left++;
        }
        }
        return (minlength==INT_MAX)?0:minlength;
    }
};
