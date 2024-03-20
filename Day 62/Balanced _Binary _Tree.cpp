//optimised approach
class Solution {
public:

    int height(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        if(left==-1 || right==-1){
            return -1;
        }
        if(abs(left-right)>1){
        return -1;
       }
       return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
      return height(root)!=-1;
    }
};
//T.C :O(N)



// class Solution {
// public:
//     int height(TreeNode*root){
//         if(root==NULL){
//             return 0;
//         }
//         int left=height(root->left);
//         int right=height(root->right);
//         return max(left,right)+1;
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL){
//             return true;
//         }
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
//         bool diff=abs(height(root->left)-height(root->right))<=1;
//         if(left && right && diff){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };//T.C=O(N^2)
