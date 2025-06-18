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
     unordered_set<int>s;
     bool issum(TreeNode* root,int k){
        if(root==nullptr)
        return false;
        if(issum(root->left,k)==true)
        return true;
        if(s.find(k-root->val)!=s.end())
        return true;
        else{
            s.insert(root->val);
        }
        return issum(root->right,k);
     }
public:
    bool findTarget(TreeNode* root, int k) {
       return issum(root,k);
    }
};