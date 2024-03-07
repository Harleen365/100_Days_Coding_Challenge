//factorial of a number using recursion
#include<iostream>
using namespace std;
int factorial(int n){
if(n==0){
    return 1;
}
//int small=factorial(n-1);
//int big= n*small;
//return big;

//or
return n*factorial(n-1);

}
int main(){
int n;
cin>>n;
int ans=factorial(n);
cout<<ans<<endl;
}
