class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.

        //  Your Code here
        pair<bool,int>isBalancedfast(Node*root){
            if(root==NULL){
                pair<bool,int>p=make_pair(true,0);
                return p;
            }
        
        pair<bool,int>left=isBalancedfast(root->left);
        pair<bool,int>right=isBalancedfast(root->right);
        
        bool leftans=left.first;
        bool rightans=right.first;
        bool diff=abs(left.second - right.second)<=1;
        
        pair<bool,int>ans;
        ans.second=max(left.second,right.second)+1;
        
        if(leftans && rightans && diff){
            ans.first=true;
        }
        else{
            ans.second=false;
        }
        return ans;
        }
 bool isBalanced(Node *root)
    {
        return isBalancedfast(root).first;
    }
};
