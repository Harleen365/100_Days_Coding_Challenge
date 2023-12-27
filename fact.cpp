#include<iostream>
using namespace std;
int main(){

int n;
int fact=1;
cin>>n;
int i=1;
while(i<=n){
    fact=fact*i;
    i++;
}
cout<<fact;

}
