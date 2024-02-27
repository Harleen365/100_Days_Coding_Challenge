class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        Node*curr=head;
        Node*prev=NULL;
        Node*forw=NULL;
        while(curr!=NULL){          
            forw=curr->next;
            curr->next=prev;
            curr->prev=forw;
            prev=curr;
            curr=forw;
        }
       //
        return prev;
        
    }
};
