class Solution {
public:
    stack<int> st;
    void operation(string& op){
        if (st.empty()) return;
        
        int n2=st.top();
        st.pop();
        
        if (st.empty()) return;
        
        int n1=st.top();
        st.pop();
        
        int x;
        switch(op[0]){
            case '+': x=n1+n2; break;
            case '-': x=n1-n2; break;
            case '*': x=n1*n2; break;
            case '/': x=n1/n2; break;
        }
        st.push(x);
    }
    int evalRPN(vector<string>& tokens) {
         for(string& s: tokens){
            if (s=="+"|| s=="-" || s=="*"|| s=="/")
                operation(s);
            else{
                int x=stoi(s);
        
                st.push(x);
            }            
        }
        if (st.empty()) return 0;
        
        return st.top();
    }
}; 
