/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>v; 
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        sort(begin(v),end(v));
        int n=v.size();
        int i=0,j=n-1;
        while(i<j){
            int sum=v[i]+v[j];
            if(sum==k)
                return true;
            else if(sum>k)
                j--;
            else
                i++;
        }
        return false;
    }
};