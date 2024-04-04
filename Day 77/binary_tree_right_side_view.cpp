// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int>ans;
//         if(root==NULL){
//             return ans;
//         }
//         queue<pair<int,TreeNode*>>q;
//         map<int,int>mp;

//         q.push({0,root});
//        while(!q.empty()){
//         auto p=q.front();
//         q.pop();

//         int hlevel=p.first;
//         TreeNode*curr=p.second;
//         mp[hlevel]=curr->val;
//         if(curr->left){
//             q.push({hlevel+1,curr->left});
//         }
//         if(curr->right){
//             q.push({hlevel+1,curr->right});
//         }

//        }
//        for(auto i:mp){
//         ans.push_back(i.second);
//        }
//        return ans;
//     }
// };

//using dfs
class Solution {
public:
    void helper(TreeNode*node,int level,vector<int>&ans){
        if(node==NULL){
            return;
        }
        if(level==ans.size()){
            ans.push_back(node->val);
        }
        helper(node->right,level+1,ans);
        helper(node->left,level+1,ans);

    }
    vector<int> rightSideView(TreeNode* root) {
       vector<int>ans;
       helper(root,0,ans);
       return ans;
    }
};
