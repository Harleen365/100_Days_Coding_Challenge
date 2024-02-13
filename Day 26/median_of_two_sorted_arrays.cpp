class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>merged;
        for(int i=0;i<n;i++){
            merged.push_back(nums1[i]);
        }
        for(int j=0;j<m;j++){
            merged.push_back(nums2[j]);
        }
        sort(merged.begin(),merged.end());
        int total=merged.size();
        if(total%2!=0){
            return merged[(total-1)/2];
        }
        else{
            int mid=total/2;
            return(merged[mid-1]+merged[mid])/2.0;
        }

    }
};
