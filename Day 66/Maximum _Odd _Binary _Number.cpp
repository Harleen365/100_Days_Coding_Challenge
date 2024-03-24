class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c1=0;
        int c0=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                c1++;
            }
            if(s[i]=='0'){
                c0++;
            }

        }
        string ans;
        ans=string(c1-1,'1')+string(c0,'0')+'1';
        return ans;
    }
};
