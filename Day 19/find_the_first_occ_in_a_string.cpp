class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
        string temp=haystack.substr(i,needle.size());
        if(temp==needle){
            return i;
        }
        }
        return -1;
    }
};
