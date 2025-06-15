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
    int res=-1;
    void printkth(TreeNode* root,int k,int &count){
        if(root!=nullptr){
            printkth(root->left,k,count);
            count++;
            if(count==k){
                res=root->val;
                return ;
            }
            printkth(root->right,k,count);
        }
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        printkth(root,k,count);
        return res;
    }
};