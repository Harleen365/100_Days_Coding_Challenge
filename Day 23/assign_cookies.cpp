class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int a=0;
        int b=0;
        int count=0;
        while(a<s.size()&& b<g.size()){
            if(s[a]>=g[b]){
                count++;
                a++;
                b++;
            }
            else{
                a++;
            }
        }
        return count;
    }
};
