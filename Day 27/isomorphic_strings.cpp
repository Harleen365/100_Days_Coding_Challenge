class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,char>stot;
        unordered_map<char,char>ttos;
        for(int i=0;i<s.size();i++){
            char chars=s[i];
            char chart=t[i];
            if(stot.find(chars)!=stot.end() && stot[chars]!=chart){
                return false;
            }
            if(ttos.find(chart)!=ttos.end() && ttos[chart]!=chars){
                return false;
            }
            stot[chars]=chart;
            ttos[chart]=chars;
        }
        return true;
        //if no inconsistencies are found
    }
};
