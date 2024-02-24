class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode(0);
        ListNode*temp=ans;
        int carry=0;
        while(l1 && l2){
            int sum=l1->val + l2->val +carry;
            temp->next=new ListNode(sum%10);
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
            temp=temp->next;
        }
        //if l1 is left
        while(l1){
            temp->next=new ListNode((l1->val+carry)%10);
            carry=(l1->val+carry)/10;
            l1=l1->next;
            temp=temp->next;
        }
        //if l2 is next
        while(l2){
            temp->next=new ListNode((l2->val+carry)%10);
            carry=(l2->val+carry)/10;
            l2=l2->next;
            temp=temp->next;
        }
        //if 1 carry is left
        if(carry==1){
            temp->next=new ListNode(1);
        }
        return ans->next;
    }
};
