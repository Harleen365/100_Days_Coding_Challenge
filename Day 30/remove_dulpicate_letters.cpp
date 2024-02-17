class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st;
        map<char,int>mp;
        vector<bool>visi(26,false);
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
            if(visi[s[i]-'a']==false){
                 while(!st.empty() && st.top()>s[i]&&mp[st.top()]>0){
                     visi[st.top()-'a']=false;
                     st.pop();
                 }
                 st.push(s[i]);
                 visi[s[i]-'a']=true;
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
