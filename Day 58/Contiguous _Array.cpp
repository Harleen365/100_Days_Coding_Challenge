class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n=nums.size();
       //map is used to store sum and its corresponding index
       unordered_map<int,int>mp;
       int sum=0;
       int sublen=0;
       for(int i=0;i<n;i++){
        //update sum on basis of current element
        sum+=nums[i]==0?-1:1;
        if(sum==0){
            sublen=i+1;

        }
        else if(mp.find(sum)!=mp.end()){
            // when current sum has been encountered before, update the maximum subarray length
            sublen=max(sublen,i-mp[sum]);
        }
        else{
            //encountered for 1st time
            mp[sum]=i;

        }
       }
       return sublen;

    }
};
