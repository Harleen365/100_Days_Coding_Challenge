class Solution {
    private:
    void insertattail(Node*&head,Node*&tail,int d){
       Node*newnode=new Node(d);
       if(head==NULL){
           head=newnode;
           tail=newnode;
       }
       else{
           tail->next=newnode;
           tail=newnode;
       }
    }
public:
    Node* copyRandomList(Node* head) {
        //step1:create a clone linkedlist
        Node*clonehead=NULL;
        Node*clonetail=NULL;

        Node*temp=head;
        while(temp!=NULL){
            insertattail(clonehead,clonetail,temp->val);
            temp=temp->next;
        }
        //step2:create a map
        unordered_map<Node*,Node*>oldtonew;
        Node*originalnode=head;
        Node*clonenode=clonehead;
        while(originalnode!=NULL && clonenode!=NULL){
         oldtonew[originalnode]=clonenode;
         originalnode=originalnode->next;
         clonenode=clonenode->next;

        }
        originalnode=head;
        clonenode=clonehead;
        while(originalnode!=NULL){
            clonenode->random=oldtonew[originalnode->random];
            originalnode=originalnode->next;
            clonenode=clonenode->next;

        }
        return clonehead;

    }
};
