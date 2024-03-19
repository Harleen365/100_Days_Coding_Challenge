class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(!root){
        return 0;
       } 
       if(!root->left && !root->right){
        return targetSum==root->val;
       }
       //jb tk target-root 0 nhi ho jata
       bool leftsum=hasPathSum(root->left,targetSum-root->val);
       bool rightsum=hasPathSum(root->right,targetSum-root->val);

       return leftsum || rightsum;
    }
};
