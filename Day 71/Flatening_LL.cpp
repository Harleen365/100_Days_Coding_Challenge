*/
Node*merge(Node*root1,Node*root2){
    if(root2==NULL){
        return root1;
    }
    if(root1==NULL){
        return root2;
    }
    Node*root3;
    if(root1->data<=root2->data){
        root3=root1;
        root3->bottom=merge(root1->bottom,root2);
    }
    else{
        root3=root2;
        root3->bottom=merge(root1,root2->bottom);
    }
    return root3;
}

/*  Function which returns the  root of 
    the flattened linked list. */
    
Node *flatten(Node *root)
{
   // Your code here
   Node*r1=root;
   Node*r2=root->next;
   while(r2){
       r1=merge(r1,r2);
       r2=r2->next;
   }
   return r1;
}
