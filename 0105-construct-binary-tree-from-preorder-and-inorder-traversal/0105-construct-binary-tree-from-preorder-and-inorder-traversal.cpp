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
    int preIndex=0;
    TreeNode* CTree(vector<int>& pre,vector<int>& in,int is,int ie){
        if(is>ie)
        return nullptr;
        TreeNode *root=new TreeNode(pre[preIndex++]);
        int Inindex=-1;
        for(int i=is;i<=ie;i++){
            if(in[i]==root->val){
                Inindex=i;
                break;
            }
        }
        root->left=CTree(pre,in,is,Inindex-1);
        root->right=CTree(pre,in,Inindex+1,ie);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int is=0,ie=n-1;
       return CTree(preorder,inorder,is,ie);
    }
};