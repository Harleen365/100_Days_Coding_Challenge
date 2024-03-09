//linear search using recursion
#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key){
if(n==0){
    return false;
}
if(arr[0]==key){
return true;
}
else{
    bool remaining= linearsearch(arr+1,n-1,key);
    return remaining;
}

}

int main(){
int arr[5]={3,5,1,2,3};
int n=5;
int key=10;
bool ans=linearsearch(arr,n,key);
if(ans){
    cout<<"present"<<endl;
}
else{
    cout<<"not"<<endl;
}

return 0;

}
