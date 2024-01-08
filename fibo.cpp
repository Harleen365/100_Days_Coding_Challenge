//fibonacci series
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int t1=0;
int t2=1;
int next=0;
for(int i=1;i<=n;i++){
    if(n==1){
        cout<<t1<<",";
        continue;
    }
    if(n==2){
        cout<<t2<<",";
        continue;
    }
    next=t1+t2;
    t1=t2;
    t2=next;

    cout<<next<<",";
}
}
