int firstocc(vector<int>& arr, int n, int k)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastocc(vector<int>& arr, int n, int k)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first=firstocc(arr,n,k);
    p.second=lastocc(arr,n,k);
    return p;
}
