class Solution {
private:
ListNode*getmid(ListNode*head){
ListNode*slow=head;
ListNode*fast=head->next;
ListNode*temp=NULL;
while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
}
return slow;
}
ListNode*reverse(ListNode*head){
    ListNode*curr=head;
    ListNode*prev=NULL;
    ListNode*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}

public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        //step1:find middle
        ListNode*middle=getmid(head);
        //step2:reverse after middle
        ListNode*temp=middle->next;
        middle->next=reverse(temp);
        //step 3:compare both halves
        ListNode*head1=head;
        ListNode*head2=middle->next;
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        //second step again
         temp=middle->next;
        middle->next=reverse(temp);
        return true;


    }
};
