class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>presumcount;
        int sum=0;
        int count=0;
        for(int num:nums){
            presumcount[sum]++;
            sum+=num;
            count+=presumcount[sum-goal];
        }
          return count;
    }
};
