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
    int PostIndex;
    TreeNode* CTree(vector<int>& in,vector<int>& post,int is,int ie){
        if(is>ie)
        return nullptr;
        TreeNode *root=new TreeNode(post[PostIndex--]);
        int Inindex=-1;
        for(int i=is;i<=ie;i++){
            if(in[i]==root->val){
                Inindex=i;
                break;
            }
        }
        root->right=CTree(in,post,Inindex+1,ie);
        root->left=CTree(in,post,is,Inindex-1);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int is=0;
        int ie=inorder.size()-1;
        PostIndex=postorder.size()-1;
        return CTree(inorder,postorder,is,ie);
    }
};