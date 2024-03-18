class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode*fast=head;
        ListNode*slow=head;
        ListNode*prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*curr=slow;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        return head;
    }
};s
