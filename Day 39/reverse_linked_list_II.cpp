ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right || head==NULL || head->next==NULL){
            return head;
        }
        ListNode*dummy=new ListNode(-1);
        dummy->next=head;
        ListNode*prev=dummy;

        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        ListNode*reversesublist=NULL;
        ListNode*curr=prev->next;
        for(int i=0;i<=right-left;i++){
         ListNode*next=curr->next;
         curr->next=reversesublist;
         reversesublist=curr;
         curr=next;
        }
        prev->next->next=curr;
        prev->next=reversesublist;

        return dummy->next;
    }
};
