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
    TreeNode* prev=nullptr;
    TreeNode* first=nullptr;
    TreeNode* second=nullptr;
   
   void fixBST(TreeNode* root){
        if(root==nullptr)
        return;
        fixBST(root->left);
        if(prev!=nullptr && root->val< prev->val){
            if(first==nullptr)
              first=prev;

            second=root;  
        }
        prev=root;
        fixBST(root->right);
   }

public:
    void recoverTree(TreeNode* root) {
       fixBST(root);
      if(first && second){
        std::swap(first->val,second->val);
      }
    }
};