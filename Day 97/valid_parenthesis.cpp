class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>result;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                result.push(s[i]);
            }
            else{
                if(!result.empty()){
                    if(s[i]==')' && result.top()=='('){
                        result.pop();
                    }
                    else if(s[i]==']'&& result.top()=='['){
                        result.pop();

                    }
                    else if(s[i]=='}'&& result.top()=='{'){
                        result.pop();

                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }//if the stack is empty and closing character is encountered
            }
        }
        return result.empty();
    }
};
