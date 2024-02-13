class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int bulls=0;
        int cows=0;
        for(int i=0;i<secret.size();i++){
           if(secret[i]==guess[i]){
               bulls++;
           }
           else{
               mp1[secret[i]]++;
               mp2[guess[i]]++;
           }

        }
        for(auto m:mp1){
            cows+=min(m.second,mp2[m.first]);
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";

    }
};
