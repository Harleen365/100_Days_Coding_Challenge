class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>>v;
    queue<TreeNode*>q;

    if(root==NULL)
    {
        return v;
    }
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        vector<int>in;

        for(int i=1;i<=n;i++)
        {
            TreeNode* temp=q.front();
            q.pop();
            in.push_back(temp->val);
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
        v.push_back(in);
    }
    for(int i=0;i<v.size();i++)
    {
        if(i%2!=0)
        {
            reverse(v[i].begin(),v[i].end());
        }
    }
    return v;
    }
};
