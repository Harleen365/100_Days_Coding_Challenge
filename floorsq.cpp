#include<bits/stdc++.h>
using namespace std;
int sqroot(int n){
int s=0;
int e=n;
long long int mid=s+(e-s)/2;
long long int ans=-1;
while(s<=e){
    long long sq=mid*mid;
    if(sq==n){
        return mid;
    }
    if(sq<n){
        ans=mid;
        s=mid+1;
    }
    if(sq>n){
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
double morepre(int n,int pre,int temp){
double factor=1;
double ans=temp;
for(int i=0;i<pre;i++){
    factor/=10;
    for(double j=ans;j*j<n;j=j+factor){
        ans=j;
    }

}
return ans;
}
int main(){
    int n;
    cin>>n;
    int temp=sqroot(n);
    cout<<morepre(n,3,temp);

}
