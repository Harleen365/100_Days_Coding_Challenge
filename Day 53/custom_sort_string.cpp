class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>cou;
        for(char c:order){
            cou[c]=0;
        }
        for(char c:s){
            if(cou.find(c)!=cou.end()){
                cou[c]++;
            }
        }
        string st;
        for( char c:order){
            st.append(cou[c],c);
        }
        for(char c:s){
            if(cou.find(c)==cou.end()){
                st.push_back(c);
            }
        }
        return st;
    }
};
