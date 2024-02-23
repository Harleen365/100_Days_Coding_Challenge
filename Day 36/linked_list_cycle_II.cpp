class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast!=NULL&&fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            ListNode*ans=head;
            while(ans!=slow){
                ans=ans->next;
                slow=slow->next;


            }
            return ans;
        }
    }
    return NULL;
    }
};
