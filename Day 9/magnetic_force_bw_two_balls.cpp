class Solution {
public:
bool ispos(vector<int>& position, int m,int mid){
    int basc=1;
    int lastpos=position[0];
    for(int i=0;i<position.size();i++){
        if(position[i]-lastpos>=mid){
            basc++;
            if(basc==m){
                return true;
            }
            lastpos=position[i];
        }
    }
    return false;
}
    int maxDistance(vector<int>& position, int m) {
    sort(position.begin(),position.end());
       long long int s=0;
        int  maxi=-1;
        for(int i=0;i<position.size();i++){
            maxi=max(maxi,position[i]);
        }
       long long  int e=maxi;
       long long  int mid=s+(e-s)/2;
       long long int ans=-1;
        while(s<=e){
           if(ispos(position,m,mid)){
               ans=mid;
               s=mid+1;
           }
           else{
               e=mid-1;
           }
           mid=s+(e-s)/2;
        }
        return ans;
    }
};
