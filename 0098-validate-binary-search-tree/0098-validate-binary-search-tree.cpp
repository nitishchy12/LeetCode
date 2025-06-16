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
    bool isBST(TreeNode* root, long long min,long long max){
        if(root==nullptr)
        return true;
        return (root->val>min && root->val<max && isBST(root->left,min,root->val) &&
         isBST  (root->right,root->val,max));
    }
public:
    bool isValidBST(TreeNode* root) {
        return isBST(root,LLONG_MIN,LLONG_MAX);
    }
};