class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>charcount;
        for(char ch:magazine){
            charcount[ch]++;
        }
        for(char ch:ransomNote){
            if(charcount[ch]==0){
                return false;
            }
            charcount[ch]--;
        }
        return true;
    }
};
