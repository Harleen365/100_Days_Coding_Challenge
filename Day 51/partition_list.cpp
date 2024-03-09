class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*list1=new ListNode();
        ListNode*list2=new ListNode();
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        while(head!=NULL){
            if(head->val<x){
                temp1->next=head;
                temp1=temp1->next;
            }
            else{
                temp2->next=head;
                temp2=temp2->next;
            }
            head=head->next;
        }
        if(list1->next==NULL){
            return list2->next;
        }
        temp1->next=list2->next;
        temp2->next=NULL;
        return list1->next;
    }
};
