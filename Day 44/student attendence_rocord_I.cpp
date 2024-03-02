class Solution {
public:
    bool checkRecord(string s) {
        int n=s.length();int acount=0;
        int lcount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                acount++;
            }
            if(s[i]=='L'){
                lcount++;
            }
            else{
                lcount=0;
            }
            if(acount>=2 || lcount>=3){
                return false;
            }
        }
        return true;
    }
};
