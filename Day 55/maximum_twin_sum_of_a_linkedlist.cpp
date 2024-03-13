class Solution {
public:
    int pairSum(ListNode* head) {
        int max_sum=0;
        int len=0;
        ListNode*curr=head;
        vector<int>v;
        while(curr!=NULL){
            v.push_back(curr->val);
            len++;
            curr=curr->next;
        }
        int s=0;
        int e=len-1;
        while(s<e){
            max_sum=max(max_sum,(v[s]+v[e]));
            s++;
            e--;
        }
        return max_sum;
    }
};
