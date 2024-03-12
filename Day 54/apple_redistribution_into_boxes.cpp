class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
       int sum=0;
       for(auto x:apple){
        sum+=x;
       }
       sort(capacity.rbegin(),capacity.rend());
       int count=0;
       int i=0;
       while(sum>0){
        sum-=capacity[i];
        count++;
        i++;
       }
       return count;

    }
};
