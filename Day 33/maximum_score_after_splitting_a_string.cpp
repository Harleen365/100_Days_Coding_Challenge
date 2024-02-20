class Solution {
public:
    int maxScore(string s) {
      int n=s.size();
      int l=0;
      int maxsc=0;
      int totalones=count(s.begin(),s.end(),'1') ;
      int r=totalones;
      for(int i=0;i<n-1;i++){
          if(s[i]=='0'){
              l++;
          }
          else{
              r--;
          }
          int curr=l+r;
          maxsc=max(maxsc,curr);
      }
      return maxsc;

    }
};
