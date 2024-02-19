class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ma=0;
        int i=0;
        int j=0;
        set<char>st;
        while(i<s.length()){
            //if character i is not in substring
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
                int len=st.size();
                ma=max(ma,len);
                i++;
            }
            else if(st.find(s[i])!=st.end()){
              st.erase(s[j]);
              j++;

            }
        }
        return ma;
    }
};
