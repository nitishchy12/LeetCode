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
    TreeNode* getSuccessor(TreeNode* curr){
        curr=curr->right;
        while(curr!=nullptr && curr->left!=nullptr){
            curr=curr->left;
        }
        return curr;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)
        return root;
        if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else if(root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else{
            if(root->left==nullptr){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==nullptr){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
           else{
            TreeNode *succ=getSuccessor(root);
            root->val=succ->val;
            root->right=deleteNode(root->right,succ->val);
           }

        }
        return root;
    }
};