class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        string last;
        while(ss >> word){
            last=word;
        }
        int count=0;
        for(char ch:last){
            count++;
        }
        return count;
    }
};
