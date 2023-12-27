#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool is_prime=true;
    if(n==0 || n==1){
        is_prime=false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            is_prime=false;
            break;
        }
    }
    if(is_prime){
        cout<<n<<"is prime";
    }
    else{
        cout<<n<<"is not prime";
    }
}
