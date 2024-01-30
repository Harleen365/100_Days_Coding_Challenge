class Solution {
public:
char tolower(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}
bool isvalid(char ch){
    if((ch>=48 && ch<=57)||(ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
        return true;
    }
    else{
        return false;
    }

}

    bool isPalindrome(string s) {
         int st=0;
    int e=s.size()-1;
    while(st<=e){
        if(isvalid(s[st])  && isvalid(s[e])){
            if(tolower(s[st])!=tolower(s[e])){
                return false;
            }
            else{
                st++;
                e--;
            }
        }
        else{
            if(isvalid(s[st])==false){
                st++;
            }
            if(isvalid(s[e])==false){
                e--;
            }
        }
    }
    return true;
    }
};
