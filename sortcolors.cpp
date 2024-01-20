class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int temp=nums[i];
                if(nums[i]>nums[j]){
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};
