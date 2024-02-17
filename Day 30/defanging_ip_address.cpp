class Solution {
public:
    string defangIPaddr(string address) {
        string temp;
        for(auto x:address){
            if(x=='.'){
                temp+="[.]";
            }
            else{
                temp+=x;
            }
        }
        return temp;
    }
};
