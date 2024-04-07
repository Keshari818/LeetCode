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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>v;
        if(!root)
            return ans;
        
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(!q.empty()){
            int s=q.size();
            count++;
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                
            }
            if(count%2!=0)
                ans.push_back(v);
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            v.clear();
        }
        return ans;
    
    }
};