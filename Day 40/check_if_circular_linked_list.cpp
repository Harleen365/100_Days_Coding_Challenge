bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL){
       return true;
   }
   Node*temp=head;
   while(temp->next!=head){
       temp=temp->next;
       if(temp==NULL){
           break;
       }
   }
   if(temp==NULL){
       return false;
   }
   else{
       return true;
   }
}
