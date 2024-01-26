bool ispos(vector<int>& arr, int n, int m,int mid){
    int studentcount=1;
    int possum=0;
    for(int i=0;i<n;i++){
        if(possum+arr[i]<=mid){
            possum=possum+arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            possum=arr[i];
        }

    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispos(arr,n,m,mid)){
          ans=mid;
          e=mid-1;
        }
        else{
            s=mid+1;
        }
       mid=s+(e-s)/2;

    }
    if(m > arr.size()){
    return -1;
}
    return ans;
}
