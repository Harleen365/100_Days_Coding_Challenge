class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=helper(root,0);
        return ans;
    }
    int helper(TreeNode*root,int sum){
        if(root==NULL){
            return 0;
        }
        sum=sum*10+root->val;
        if(root->left==NULL && root->right==NULL){
            return sum;
        }
        return helper(root->left,sum)+helper(root->right,sum);
    }
};
