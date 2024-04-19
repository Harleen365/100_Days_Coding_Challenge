#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>>ans;
    set<vector<int>>temp;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==K){
                temp.insert({arr[i],arr[l],arr[r]});
            }
            if(arr[i]+arr[l]+arr[r]>K){

                r--;
            }
            else{
                l++;
            }
        }


    }
    for(auto i:temp){
        ans.push_back(i);
    }
    return ans;
}
