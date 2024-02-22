class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode*slow=head;
      ListNode*fast=head;
      for(int i=0;i<n;i++){
          if(fast->next==NULL){
              return head->next;
          }
          fast=fast->next;
      }
      while(fast->next!=NULL){
          slow=slow->next;
          fast=fast->next;
      }
      slow->next=slow->next->next;
      return head;
    }
};
