class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int,int>mp1;
        map<int,int>mp2;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            mp1[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            mp2[arr2[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<mp1[arr2[i]];j++){
                ans.push_back(arr2[i]);
            }
        }
        for(int i=0;i<arr1.size();i++){
            if(mp2.find(arr1[i])!=mp2.end()){

            }
            else{
                ans.push_back(arr1[i]);
            }
        }
        return ans;
    }
};
