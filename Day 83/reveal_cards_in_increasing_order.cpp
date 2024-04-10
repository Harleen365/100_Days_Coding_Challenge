class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int>ans(n);
        sort(deck.begin(),deck.end());
        deque<int>dq;
        for(int i=0;i<n;i++){
            dq.push_back(i);
        }
        int chance=0;
        int flip=0;
        while(dq.size()>0){
            if(flip==0){
                ans[dq.front()]=deck[chance++];
                dq.pop_front();
            }
            else{
                dq.push_back(dq.front());
                dq.pop_front();
            }
            flip^=1;
        }
        return ans;
    }
};
