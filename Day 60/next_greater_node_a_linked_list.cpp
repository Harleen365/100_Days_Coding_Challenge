class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode*curr=head;
        vector<int>res;
        while(curr!=NULL){
            res.push_back(curr->val);
            curr=curr->next;
        }
        int n=res.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               if(res[j]>res[i]){
                ans[i]=res[j];
                break;
               }
            }
        }
        return ans;
    }
};
