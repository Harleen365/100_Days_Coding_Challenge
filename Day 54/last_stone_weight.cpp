class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()!=1 && pq.size()){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            int c=max(a,b)-min(a,b);
            if(c){
                pq.push(c);
            }
           
        }
         if(pq.size()){
              return pq.top();  
            }
        return 0;
    }
};
