class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n=s.size();
        int maxchar=-1;
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              if(s[i]==s[j]){
                 maxchar=max(maxchar,j-i-1);
              }
          }
        }
        return maxchar;
    }
};
