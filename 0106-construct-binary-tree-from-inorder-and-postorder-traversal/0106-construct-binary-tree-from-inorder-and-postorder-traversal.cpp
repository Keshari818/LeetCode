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
    unordered_map<int,int>mp;
    TreeNode* postorderTree(vector<int>& inorder,int is,int ie,vector<int>& postorder,int ps,int pe){
        if(ps>pe || is>ie)
            return NULL;
        TreeNode*temp=new TreeNode(postorder[pe]);
        int root=mp[postorder[pe]];
        int left=root-is;
        
        temp->left = postorderTree(inorder, is, root-1, postorder, ps, ps+left-1);
        temp->right = postorderTree(inorder, root+1, ie, postorder, ps+left, pe-1);
        
        return temp;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n=inorder.size();
        int m=postorder.size();
        if(n!=m)
            return NULL;
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        return postorderTree(inorder,0,n-1,postorder,0,m-1);
    }
};