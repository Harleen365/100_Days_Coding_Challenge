class Solution {
public:
bool isVowel(char &ch){
    return (ch=='a'|| ch=='e' || ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I' ||ch=='O'||
    ch=='U' );
}
    string reverseVowels(string s) {
        vector<char>vow;
        for(auto i:s){
            if(isVowel(i)){
                 vow.push_back(i);
            }
        }
        reverse(vow.begin(),vow.end());
        int k=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]=vow[k++];
            }
        }
        return s;
    }
};
