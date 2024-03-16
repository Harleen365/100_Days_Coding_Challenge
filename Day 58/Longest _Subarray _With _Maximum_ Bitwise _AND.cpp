class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        unsigned int max=0;
        unsigned int maxcount=0;
        unsigned int count=0;
        for(unsigned int i=0;i<nums.size();i++){
            if(nums[i]==max){
                count++;
            }
            else if(nums[i]>max){
                max=nums[i];
                count=1;
                maxcount=0;
            }
            else{
                count=0;
            }
            if(count>maxcount){
                maxcount=count;
            }
        }
        return maxcount;
    }
};s
