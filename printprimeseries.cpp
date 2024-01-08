#include<iostream>
using namespace std;
int main(){
int low;
cin>>low;
int high;
cin>>high;
bool isprime=true;
while(low<high){
        isprime=true;
    if(low==0||low==1){
        isprime=false;
    }
    for(int i=2;i<=low/2;i++){
        if(low%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<low<<",";

    }
    low++;

}
}
