//binary search using recursion
#include<iostream>
using namespace std;
bool binary(int *arr,int s,int e,int k){
    //base case
    if(s>e){
    return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k)
    {

        return true;
    }

    if(arr[mid]<k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }



}


int main(){
int arr[5]={2,4,10,15,34};
int n=5;
int key=4;
cout<<"present or not"<<binary(arr,0,5,key);}
