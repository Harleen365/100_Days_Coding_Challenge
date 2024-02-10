class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size(),0);
        stack<int>stk;
        int n=temperatures.size();
        for(int idx=n-1;idx>=0;idx--){
           while(!stk.empty() && temperatures[idx]>=temperatures[stk.top()]){
              stk.pop();
           }
           //jb temperatures[idx]<temperatures[stk.top()]
           if(!stk.empty()){
               ans[idx]=stk.top()-idx;
           }
           //jb stack empty ho
            stk.push(idx);
        }
        return ans;
    }
};
