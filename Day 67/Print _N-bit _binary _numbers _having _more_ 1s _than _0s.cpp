class Solution{
public:	
void helper(int n,string s,int count1,vector<string>&ans){
    if(n==0){
        ans.push_back(s);
        return;
    }
    helper(n-1,s+'1',count1+1,ans);
    if(count1>0){
        helper(n-1,s+'0',count1-1,ans);
    }
}
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string>ans;
	    helper(n,"",0,ans);
	    return ans;
	}
};
