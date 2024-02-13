#include <bits/stdc++.h>
int linearSearch(vector<int> &a, int x) {
    //    Write your code here
    for(int i=0;i<a.size();i++){
        if(a[i]==x){
            return i;
        }

    }
    return -1;
}
