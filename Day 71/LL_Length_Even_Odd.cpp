class Solution {
  public:
    int isLengthEvenOrOdd(struct Node* head) {
        // Code here
        if(head==NULL){
            return 0;
        }
        struct Node*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return(count%2!=0);
    }
};
