class Solution {
public:
void func(int temp,vector<int>&ans,int &n){
    if(temp>n){
        return;
    }
    ans.push_back(temp);
    func(temp*10,ans,n);
    if(temp%10!=9){
        func(temp+1,ans,n);
    }
}
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        func(1,ans,n);
        return ans;
    }
};
