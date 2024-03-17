class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel; vector<int> pos;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vowel.push_back(s[i]);
                pos.push_back(i);
            }
        }
        sort(vowel.begin(),vowel.end());
        string res=s;
        for(int i=0;i<pos.size();i++){
            res[pos[i]]=vowel[i];
        }
        return res;
    }
};
