class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
       map<char,int>mp;
       for(int i=0;i<str.size();i++){
           mp[str[i]]++;
       }
       char ans;
       int max=INT_MIN;
       for(auto it:mp){
           if(max<it.second){
               max=it.second;
               ans=it.first;
           }
       }
       return ans;

    // to store length of string


    }

};
