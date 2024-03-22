class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*curr=dummy;
        int val;
        while(curr->next!=NULL && curr->next->next!=NULL){
            if(curr->next->val==curr->next->next->val){
                val=curr->next->val;
                while(curr->next!=NULL && curr->next->val==val){
                    curr->next=curr->next->next;
                }

            }
            //if there is no duplicate
            else{
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};
