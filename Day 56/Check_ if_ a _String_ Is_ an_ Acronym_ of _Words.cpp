class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            ans.push_back(temp[0]);
        }
        if(s==ans){
            return true;
        }
        else{
            return false;
        }
    }
};
