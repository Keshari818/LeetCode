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
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        if(!root)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                maxi=max(temp->val,maxi);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                   q.push(temp->right);
            }
            v.push_back(maxi);
        }
        return v;
    }
};