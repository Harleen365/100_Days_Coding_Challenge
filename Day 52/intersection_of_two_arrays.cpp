class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]==nums2[j]){
                res.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
            i++;
            }


        }
        vector<int>ans;
        for(auto i:res){
            ans.push_back(i);
        }
        return ans;
    }
};
