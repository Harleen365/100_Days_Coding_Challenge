class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int count=0;
        struct Node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    
    }
};
    
