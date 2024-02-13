class Solution {
public:
   bool ispos(vector<int>& nums,  int k,int mid){
    int studentcount=1;
    int possum=0;
    for(int i=0;i<nums.size();i++){
        if(possum+nums[i]<=mid){
            possum=possum+nums[i];
        }
        else{
            studentcount++;
            if(studentcount>k|| nums[i]>mid){
                return false;
            }
            possum=nums[i];
        }

    }
    return true;
}


    int splitArray(vector<int>& nums, int k) {
        int s=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispos(nums,k,mid)){
          ans=mid;
          e=mid-1;
        }
        else{
            s=mid+1;
        }
       mid=s+(e-s)/2;

    }
    if(k > nums.size()){
    return -1;
}
    return ans;
    }


};
