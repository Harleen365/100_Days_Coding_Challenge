class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        while(head!=NULL){
            ans=ans*2+head->val;
            head=head->next;
        }
        return ans;
    }
};
