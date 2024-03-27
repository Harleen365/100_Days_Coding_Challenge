class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        vector<int>ans;
        Node*temp=head;
        while(temp){
            if(temp->data%2==0){
                ans.push_back(temp->data);
            }
            temp=temp->next;
            
        }
        temp=head;
        while(temp){
            if(temp->data%2!=0){
                ans.push_back(temp->data);
            }
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp){
            temp->data=ans[i++];
            temp=temp->next;
        }
        return head;
    }
};
